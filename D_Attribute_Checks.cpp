#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    // Initialize dp array, where dp[s] is the max number of checks passed
    // with s points spent on Strength.
    vector<int> dp(m + 1, -1); // -1 means invalid state
    dp[0] = 0; // Starting point, 0 points spent and 0 checks passed

    // Process each record
    for (int i = 0; i < n; i++) {
        if (r[i] == 0) {
            // Attribute point gain: we can distribute it to Strength or Intelligence
            for (int s = m; s >= 0; s--) {
                if (dp[s] != -1) {
                    // Spend 1 point on Strength or Intelligence (increase both possibilities)
                    if (s + 1 <= m) dp[s + 1] = max(dp[s + 1], dp[s]);
                    dp[s] = max(dp[s], dp[s] + 1); // alternatively, just pass the check
                }
            }
        } else if (r[i] > 0) {
            // Intelligence check
            for (int s = 0; s <= m; s++) {
                int intelligence = m - s;
                if (dp[s] != -1 && intelligence >= r[i]) {
                    dp[s]++; // Passed the Intelligence check
                }
            }
        } else if (r[i] < 0) {
            // Strength check
            for (int s = 0; s <= m; s++) {
                if (dp[s] != -1 && s >= -r[i]) {
                    dp[s]++; // Passed the Strength check
                }
            }
        }
    }

    // Find the maximum number of checks passed
    int maxChecks = *max_element(dp.begin(), dp.end());
    cout << maxChecks << endl;

    return 0;
}
