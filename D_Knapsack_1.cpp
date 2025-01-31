#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n"
#define bob() cout <<"Bob\n"
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

int solve(vector <pair<int, int>>& V, int n, int i, int w, vector <vector <int>>& dp){
    if(i == n) return 0;
    if(dp[i][w] != -1) return dp[i][w];
    int a = 0;
    int b = 0;

    if(V[i].first <= w){
        a += V[i].second + solve(V, n, i+1, w - V[i].first, dp);
    }

    b = solve(V, n, i+1, w, dp);
    return dp[i][w] = max(a, b);
}

void Solution()
{
    ll n, w;
    cin >> n >> w;

    vector <pair<int, int>> V(n);
    for(int i = 0; i < n; i++){
        cin >> V[i].first >> V[i].second;
    }

    vector <vector <int>> dp(n, vector<int>(w+1, -1));

    cout << solve(V, n, 0, w, dp);
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