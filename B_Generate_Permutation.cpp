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
    cin  >> n;

    if(n % 2 == 0){
        cout << "-1\n";
    }
    else{
        vector <int> V(n);
        int i = 0, j = n-1, cnt = 0;
        int x = 1;
        for(int k = 0; k < n; k++){
            if(cnt & 1){
                V[i++] = x++;
            }
            else{
                V[j--] = x++;
            }
            cnt++;
        }
        print(V);
        cout << endl;
    }
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