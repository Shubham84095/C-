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

ll solve(vector<ll>& A, ll n, ll i, ll c, vector<vector<ll>>& dp) {
    if (i == n) return 0;
    if (dp[i][c] != -1) return dp[i][c];

    ll skip = solve(A, n, i + 1, c, dp);
    ll defeat;
    if (c % 2 == 1) {
        defeat = 2 * A[i] + solve(A, n, i + 1, 0, dp);
    } else {
        defeat = A[i] + solve(A, n, i + 1, 1, dp);
    }
    return dp[i][c] = max(skip, defeat);
}

void Solution() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<vector<ll>> dp(N, vector<ll>(2, -1));
    cout << solve(A, N, 0, 0, dp) << endl;
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