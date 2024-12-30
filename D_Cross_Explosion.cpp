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
    int H, W, Q;
    cin >> H >> W >> Q;

    // Initialize sets for tracking destroyed walls
    set<pair<int, int>> destroyedWalls;
    set<int> destroyedRows;
    set<int> destroyedCols;

    vector<pair<int, int>> queries(Q);

    for (int i = 0; i < Q; ++i) {
        int R, C;
        cin >> R >> C;
        queries[i] = {R, C};
    }

    // Process each query
    for (const auto& query : queries) {
        int R = query.first;
        int C = query.second;

        // If the wall at (R, C) has not been destroyed
        if (destroyedWalls.find({R, C}) == destroyedWalls.end()) {
            // Mark the wall at (R, C) as destroyed
            destroyedWalls.insert({R, C});

            // Process destruction in each direction from (R, C)
            // Up direction
            for (int r = R - 1; r >= 1; --r) {
                if (destroyedWalls.find({r, C}) != destroyedWalls.end()) {
                    break;
                }
                destroyedWalls.insert({r, C});
            }

            // Down direction
            for (int r = R + 1; r <= H; ++r) {
                if (destroyedWalls.find({r, C}) != destroyedWalls.end()) {
                    break;
                }
                destroyedWalls.insert({r, C});
            }

            // Left direction
            for (int c = C - 1; c >= 1; --c) {
                if (destroyedWalls.find({R, c}) != destroyedWalls.end()) {
                    break;
                }
                destroyedWalls.insert({R, c});
            }

            // Right direction
            for (int c = C + 1; c <= W; ++c) {
                if (destroyedWalls.find({R, c}) != destroyedWalls.end()) {
                    break;
                }
                destroyedWalls.insert({R, c});
            }
        }
    }

    // Calculate remaining walls
    int totalWalls = H * W;
    int destroyedCount = destroyedWalls.size();
    int remainingWalls = totalWalls - destroyedCount;

    cout << remainingWalls << '\n';
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