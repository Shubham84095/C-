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

int solve(vector <vector<int>>& V, int n, int i, int l, vector <vector<int>>& dp){
    if(i >= n) return 0;
    if(dp[i][l] != -1) return dp[i][l];

    int ans = 0;
    int case0 = 0;
    int case1= 0;
    int case2 = 0;
    if(l != 0){
        case0 = V[i][l] + solve(V, n, i+1, 0, dp);
    }

    if(l != 1){
        case1 = V[i][l] + solve(V, n, i+1, 1, dp);
    } 

    if(l != 2){
        case2 = V[i][l] + solve(V, n, i+1, 2, dp);
    }

    return dp[i][l] = max(case0, max(case1, case2));
}

void Solution()
{
    int n;
    cin >> n;

    vector <vector<int>> V(n, vector <int> (3));

    for(int i = 0; i < n; i++){
        cin >> V[i][0] >> V[i][1] >> V[i][2];
    }

    vector <vector<int>> dp1(n, vector <int> (3,-1));
    vector <vector<int>> dp2(n, vector <int> (3,-1));
    vector <vector<int>> dp3(n, vector <int> (3,-1));

    int ans1 = solve(V, n, 0, 0, dp1);
    int ans2 = solve(V, n, 0, 1, dp2);
    int ans3 = solve(V, n, 0, 2, dp3);

    cout << max(ans1, max(ans2, ans3)) << endl;
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