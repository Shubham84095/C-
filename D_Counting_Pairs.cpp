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

void Solution()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector <int> A(n);
    for(auto& e: A) cin >> e;
    sort(all(A));
    
    ll ans = 0;
    ll sum = accumulate(all(A), 0LL);
    for(int i = 0; i < n; i++){
        ll tempSum = sum - A[i];
        ll low = tempSum - y;
        ll high = tempSum - x;  

        auto lower = lower_bound(A.begin() + i + 1, A.end(), low);
        auto upper = upper_bound(A.begin() + i + 1, A.end(), high);

        ll diff = upper - lower;
        // cout << diff << endl;
        ans += (max(diff, 0LL));
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