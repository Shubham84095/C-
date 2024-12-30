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
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

int solve(vector <int>& V, int n, int i, vector <int>& dp){
    if(i == n-1) return 0;
    if(i >= n) return INT_MAX;

    if(dp[i] != INT_MAX) return dp[i];
    int step1 = 0, step2 = 0;
    if(i+1 < n) step1 = abs(V[i+1]-V[i]) + solve(V, n, i+1, dp);
    else step1 = INT_MAX;
    if(i+2 < n) step2 = abs(V[i+2]-V[i]) + solve(V, n, i+2, dp);
    else step2 = INT_MAX;

    dp[i] = min(step1, step2);
    return dp[i];
}

void Solution()
{
    int n;
    cin >> n;

    vector <int> V(n);
    vector <int> dp(n, INT_MAX);
    for(int i = 0; i < n; i++) cin >> V[i];

    cout << solve(V, n, 0,dp) << endl;
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