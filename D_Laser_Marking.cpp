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

double dist(double x1, double y1, double x2, double y2) {
    return sqrt(1.0 * (x2 - x1) * (x2 - x1) + 1.0 * (y2 - y1) * (y2 - y1));
}

void Solution() {
    int N, S, T;
    cin >> N >> S >> T;

    vector<pair<int, int>> AB(N);
    vector<pair<int, int>> CD(N); 

    for (int i = 0; i < N; i++) {
        cin >> AB[i].first >> AB[i].second;
        cin >> CD[i].first >> CD[i].second;
    }

    
    vector<vector<vector<double>>> dp(1 << N, vector<vector<double>>(N, vector<double>(2, 1e18)));

    for (int i = 0; i < N; i++) {
        dp[1 << i][i][0] = dist(0, 0, AB[i].first, AB[i].second) / S + dist(AB[i].first, AB[i].second, CD[i].first, CD[i].second) / T;
        dp[1 << i][i][1] = dist(0, 0, CD[i].first, CD[i].second) / S + dist(CD[i].first, CD[i].second, AB[i].first, AB[i].second) / T;
    }

    for (int mask = 0; mask < (1 << N); mask++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 2; j++) {
                if (dp[mask][i][j] == 1e18) continue;

                double cur_x = (j == 0 ? CD[i].first : AB[i].first);
                double cur_y = (j == 0 ? CD[i].second : AB[i].second);

                for (int nxt = 0; nxt < N; nxt++) {
                    if (mask & (1 << nxt)) continue; 

                    dp[mask | (1 << nxt)][nxt][0] = min(dp[mask | (1 << nxt)][nxt][0],
                                                        dp[mask][i][j] + dist(cur_x, cur_y, AB[nxt].first, AB[nxt].second) / S + dist(AB[nxt].first, AB[nxt].second, CD[nxt].first, CD[nxt].second) / T);

                    dp[mask | (1 << nxt)][nxt][1] = min(dp[mask | (1 << nxt)][nxt][1],
                                                        dp[mask][i][j] + dist(cur_x, cur_y, CD[nxt].first, CD[nxt].second) / S + dist(CD[nxt].first, CD[nxt].second, AB[nxt].first, AB[nxt].second) / T);
                }
            }
        }
    }

    double ans = 1e18;
    for (int i = 0; i < N; i++) {
        ans = min(ans, dp[(1 << N) - 1][i][0]);
        ans = min(ans, dp[(1 << N) - 1][i][1]);
    }

    cout << fixed << setprecision(10) << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        Solution();
    }

    return 0;
}
