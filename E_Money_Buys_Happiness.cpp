#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
// #define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
ll inf = INT64_MAX;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    ll m, x;
    cin >> m >> x;

    vector <ll> c(m), h(m);
    for(ll i =  0; i < m; i++){
        cin >> c[i] >> h[i];
    }

    ll maxH = accumulate(h.begin(), h.end(), 0);

    vector <ll> dp(maxH + 1, inf);
    dp[0] = 0;

    for(ll i = 0; i < m; i++){
        for(ll j = maxH; j >= 0; j--){
            if(dp[j] == inf) continue;
            ll cost = c[i] + dp[j];
            ll happy = j + h[i];
            if(cost <= i*x)
                dp[happy] = min(dp[happy], cost);

            assert(dp[j] != inf);    
        }
    }

    for(ll k = maxH; k >= 0; k--){
        if(dp[k] != inf){
            cout << k << endl;
            return;
        }
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