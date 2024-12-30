#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 200000;

vector<long long> fact(MAX_N + 1);
vector<long long> inv_fact(MAX_N + 1);

// Function to compute x^y % p in O(log y)
long long mod_exp(long long x, long long y, long long p) {
    long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

// Function to precompute factorials and inverse factorials
void precompute_factorials_and_inverses() {
    fact[0] = 1;
    for (int i = 1; i <= MAX_N; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    inv_fact[MAX_N] = mod_exp(fact[MAX_N], MOD - 2, MOD);
    for (int i = MAX_N - 1; i >= 0; i--) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
}

// Function to compute nCr % MOD
long long nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    return fact[n] * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    precompute_factorials_and_inverses();

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long sum_medians = 0;

        // Compute the prefix sums of the binary array
        vector<int> prefix_sum(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix_sum[i + 1] = prefix_sum[i] + a[i];
        }

        int half_k = (k - 1) / 2;

        for (int i = 0; i <= n - k; i++) {
            int ones_in_subseq = prefix_sum[i + k] - prefix_sum[i];
            if (ones_in_subseq > half_k) {
                sum_medians = (sum_medians + 1) % MOD;
            }
        }

        cout << sum_medians << '\n';
    }

    return 0;
}
