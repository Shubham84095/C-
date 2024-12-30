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

bool check(ll k, ll mid, ll n, ll& ans) {
    ll tot = (n * (2 * k + n - 1)) / 2;
    ll f = (mid * (2 * k + mid - 1)) / 2;
    ll s = tot - f;
    if (f <= s) {
        ans = min(ans, abs(f - s));
        return true;
    } else {
        return false;
    }
}

bool solve(ll k, ll mid, ll n, ll& ans) {
    ll tot = (n * (2 * k + n - 1)) / 2;
    ll f = (mid * (2 * k + mid - 1)) / 2;
    ll s = tot - f;
    if (f > s) {
        ans = min(ans, abs(f - s));
        return true;
    } else {
        return false;
    }
}

void Solution() {
    ll n, k;
    cin >> n >> k;

    ll l = 1, r = n;
    ll ans = LLONG_MAX;

    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(k, mid, n, ans)) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    l = 1, r = n;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (solve(k, mid, n, ans)) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}