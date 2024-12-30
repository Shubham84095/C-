#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;

bool solve(vector<int> &A, int mid, ll M) {
    ll sum = 0;
    for (auto &e : A) sum += min(e, mid);
    return (sum <= M);
}

void Solution() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (auto &e : A) cin >> e;

    ll sum = accumulate(all(A), 0LL);
    if (sum <= M) {
        cout << "infinite\n";
        return;
    }

    ll l = 0, r = *max_element(all(A)) + 1;
    ll ans = -1;

    while (l < r) {
        ll mid = l + (r - l) / 2;
        if (solve(A, mid, M)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid;
        }
    }

    cout << ans << endl;
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
