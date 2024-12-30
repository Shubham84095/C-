#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;

void Solution()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> V(N);
    for(auto &i: V) cin >> i;
    sort(all(V));

    while(Q--){
        int x, k;
        cin >> x >> k;

        vector<int> dist;
        auto it = lower_bound(all(V), x);
        int l = distance(V.begin(), it);
        int r = l;
        
        while (dist.size() < k) {
            if (l > 0 && r < N) {
                if (abs(V[l-1] - x) <= abs(V[r] - x)) {
                    dist.push_back(abs(V[l-1] - x));
                    l--;
                } else {
                    dist.push_back(abs(V[r] - x));
                    r++;
                }
            } else if (l > 0) {
                dist.push_back(abs(V[l-1] - x));
                l--;
            } else {
                dist.push_back(abs(V[r] - x));
                r++;
            }
        }
        cout << dist[k-1] << endl;
    }
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
