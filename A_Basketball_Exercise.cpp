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

int solve(vector <vector <int>>& V, int n, int i, int choose, vector <vector <int>>& dp){
    if(i == n) return 0;
    if(dp[choose][i] != -1) return dp[choose][i];

    int a = 0;
    int b = 0;
    if(choose){
        a = V[choose][i] + solve(V, n, i+1, !choose, dp);
    }
    else a = V[choose][i] + solve(V, n, i+1, !choose, dp);

    b = solve(V, n, i+1, choose, dp);

    return dp[choose][i] = max(a,b);
}

void Solution()
{
    int n;
    cin >> n;

    vector <vector <int>> V(2, vector <int> (n));
    vector <vector <int>> dp1(2, vector <int> (n, -1));
    vector <vector <int>> dp2(2, vector <int> (n, -1));
    
    for(int i = 0; i < n; i++) cin >> V[0][i];
    for(int i = 0; i < n; i++) cin >> V[1][i];

    ll a = solve(V, n, 0, 0, dp1);
    ll b = solve(V, n, 0, 1, dp2);

    cout << max(a, b) << endl;
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