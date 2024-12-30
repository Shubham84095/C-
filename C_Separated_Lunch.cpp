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
    int N;
    cin >> N;
    vector<int> K(N);
    for (int i = 0; i < N; ++i) {
        cin >> K[i];
    }

    int Tot = accumulate(K.begin(), K.end(), 0);

    int ans = Tot;
    for (int mask = 0; mask < (1 << N); ++mask) {
        int GrpA = 0;

        for (int i = 0; i < N; ++i) {
            if (mask & (1 << i)) {
                GrpA += K[i];
            }
        }

        int GrpB = Tot - GrpA;

        ans = min(ans, max(GrpA, GrpB));
    }

    cout << ans << endl;
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