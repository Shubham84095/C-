#include <iostream>
#include <vector>
#include <unordered_map>

const int MOD = 998244353;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Compute prefix sums
    vector<long long> prefix_sum(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + A[i - 1];
    }

    // DP array
    vector<long long> dp(N + 1, 0);
    dp[0] = 1;

    // To keep track of prefix sums
    unordered_map<long long, int> last_occurrence;
    last_occurrence[0] = 0;

    for (int i = 1; i <= N; ++i) {
        // If there exists a prefix sum that results in a subsequence with sum K, subtract invalid ways
        if (last_occurrence.count(prefix_sum[i] - K)) {
            int last_valid_index = last_occurrence[prefix_sum[i] - K];
            dp[i] = (dp[i - 1] + dp[i] - dp[last_valid_index]) % MOD;
            if (dp[i] < 0) dp[i] += MOD;
        } else {
            dp[i] = (dp[i - 1] + dp[i]) % MOD;
        }
        
        // Update the last occurrence of the current prefix sum
        last_occurrence[prefix_sum[i]] = i;
    }

    // Result is the number of ways to divide the sequence up to the end
    cout << dp[N] << endl;

    return 0;
}
