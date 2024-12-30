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

ll solve(ll p1, ll q1, ll p2, ll q2, ll m){
    ll num = min(m/p1, q1);
    if(num == 0) return 0;
    ll price = num*p1;
    ll left = m - price;
    ll tnum = min(left/p2, q2);
    ll tprice = tnum*p2;
    price += tprice;
    left -= tprice;
    q2 -= tnum;
    ll fulfilled = min(left, min(q2, num));
    return (price+fulfilled);
}


void Solution()
{
    ll n, m;
    cin >> n >> m;

    vector <pair<ll, ll>> V(n);
    for(auto& i: V) cin >> i.first;
    for(auto& i: V) cin >> i.second;

    sort(all(V));

    int j = 0;
    ll ans = 0;

    while (j < n) {
        if(V[j].first <= m){
            ll num = min(m/V[j].first, V[j].second);
            ans = max(ans, num*V[j].first);
        }
        
        if(j+1 < n && V[j+1].first-V[j].first == 1){
            ans = max(ans, solve(V[j].first, V[j].second, V[j+1].first, V[j+1].second, m));
        }

        j++;
    }


    cout << ans << endl;
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