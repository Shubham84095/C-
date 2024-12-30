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

bool check(ll mid, vector<ll>& A) {
    bool flag = false;
    ll n = A.size();
    ll i = 0;
    while (i < n) {
        if (i + 1 >= n && flag) {
            return false;
        }
        else if(i+1 >= n && flag == false){
            return true;
        }
        ll curr = A[i];
        ll next = A[i + 1];

        if (next - curr <= mid) {
            i += 2;
        } else if (next - curr > mid && !flag) {
            i += 1;
            flag = true;
        } else {
            return false;
        }
    }

    return true;
}

void Solution() {
    ll n;
    cin >> n;
    vector<ll> A(n);
    for (auto& e : A) cin >> e;
    sort(A.begin(), A.end());

    ll l = 1;
    ll r = 1e18;
    ll result = r;

    while (l <= r) {
        ll mid = l + (r - l) / 2;

        if (check(mid, A)) {
            result = mid; 
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << result << endl;
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