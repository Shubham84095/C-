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
    int n, m, k;
    cin >> n >> m >> k;

    vector <int> Q(m), M(k);
    map <int, bool> mp;
    for(auto& e: Q) cin >> e;
    for(auto& e: M) cin >> e, mp[e] = 1;

    for(int i = 0; i < m; i++){
        if((n-k) <= 1){
            if(n - k == 0) cout << "1";
            else{
                if(mp[Q[i]] == 0) cout << "1";
                else cout << "0";
            }
        }
        else{
            cout << "0";
        }
    }

    cout << endl;
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