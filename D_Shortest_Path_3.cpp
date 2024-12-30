#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n"
#define bob() cout <<"Bob\n"
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;


const int INF = INT64_MAX;

void dijkstra(int N, vector<int>& A, map<int,vector<pair<int, int>>>& adj) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(N + 1, INF);
    dist[1] = A[0];
    pq.push({A[0], 1});

    while (!pq.empty()) {
        int curr = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (curr > dist[u]) {
            continue;
        }

        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int ed = neighbor.second;
            int temp = (long long)(curr + A[v - 1] + ed);

            if (temp < dist[v]) {
                dist[v] = temp;
                pq.push({temp, v});
            }
        }
    }

    for (int i = 2; i <= N; ++i) {
        cout << dist[i] << " ";
    }cout << endl;
}

void Solution()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    map<int,vector<pair<int, int>>> adj;
    for (int i = 0; i < M; ++i) {
        int U, V, B;
        cin >> U >> V >> B;
        adj[U].push_back({V, B});
        adj[V].push_back({U, B});
    }

    dijkstra(N, A, adj);
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