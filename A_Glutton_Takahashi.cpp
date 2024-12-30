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
    vector <string> V(n);
    for(auto& i: V) cin >> i;

    for(int i = 0; i < n-1; i++){
        if(V[i] == "sweet" && V[i+1] == "sweet" && i != n-2){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}