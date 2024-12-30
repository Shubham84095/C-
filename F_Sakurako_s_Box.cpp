#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long
#define endl '\n'
#define yes() cout << "YES\n"
#define no() cout << "NO\n"

using namespace std;
const int MOD = 1e9 + 7;

int modInv(int x, int mod) {
    int res = 1, p = mod - 2;
    while (p > 0) {
        if (p % 2) res = res * x % mod;
        x = x * x % mod;
        p /= 2;
    }
    return res;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int suma = 0, suma2 = 0;
    
    for (int &x : a) {
        cin >> x;
        suma = (suma + x) % MOD;
        suma2 = (suma2 + x * x % MOD) % MOD;
    }

    int S = (suma * suma % MOD - suma2 + MOD) % MOD;
    S = S * modInv(2, MOD) % MOD;

    int Q = n * (n - 1) / 2 % MOD;
    int Qinv = modInv(Q, MOD);

    int res = S * Qinv % MOD;

    cout << res << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
