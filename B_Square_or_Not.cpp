#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int z = sqrt(n);
    if(n != z*z){
        cout << "No" << endl;
        return;
    }

    for(int i = 0; i < n; i++){
        int x = (i+1)/z;
        int y = (i)%z;
        if(x == 0 || y == 0 || x == z-1 || y == z-1){
            if(s[i] != '1'){
                cout << "No" << endl;
                return;
            }
        }
        else{
            if(s[i] != '0'){
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}