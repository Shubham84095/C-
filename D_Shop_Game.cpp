#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
#define Vll(n,m) vector<vector<int,int>> V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
   ll n, k;
   cin >> n >> k;

   vector <pair<ll, ll> > V(n);
   for(ll i = 0; i < n; i++) cin >> V[i].second; // A
   for(ll i = 0; i < n; i++) cin >> V[i].first; // B

   sort(all(V));
   
   vector <ll> potentialProfit(n);
   for(ll i = 0; i < n; i++) potentialProfit[i] = max(0LL, (V[i].first - V[i].second));

   // prefix sum of Potential Profits
   for(ll i = 1; i < n; i++) potentialProfit[i] += potentialProfit[i-1];

   ll ans = 0, potentialLoss = 0;
   multiset <ll> tempLoss;
   for(ll i = n - 1; i >= 0; i--){
        if(i <= n - k - 1){
            ans = max(ans, (potentialProfit[i] - potentialLoss));
        }

        tempLoss.insert(V[i].second);
        potentialLoss += V[i].second;
        if(tempLoss.size() > k){
            auto position = --tempLoss.end();
            ll biggestLossQty = *position;
            potentialLoss -= biggestLossQty;
            tempLoss.erase(position);
        }
   }

   ans = max(0LL, ans);

   cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // t = 1
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}