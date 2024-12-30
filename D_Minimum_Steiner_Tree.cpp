#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> adj;
vector<int> depth, parent;

// Perform BFS to initialize depth and parent arrays
void bfs(int root) {
    queue<int> q;
    q.push(root);
    depth[root] = 0;
    parent[root] = -1;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        for (int neighbor : adj[node]) {
            if (neighbor == parent[node]) continue;
            parent[neighbor] = node;
            depth[neighbor] = depth[node] + 1;
            q.push(neighbor);
        }
    }
}

// Function to find the LCA of two nodes
int findLCA(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    
    // Bring u and v to the same level
    while (depth[u] > depth[v]) u = parent[u];
    
    while (u != v) {
        u = parent[u];
        v = parent[v];
    }
    
    return u;
}

// Function to find the minimum subtree size containing all K vertices
int findMinSubtree(int K, const vector<int>& vertices) {
    // Find LCA of all vertices
    int lca = vertices[0];
    for (int i = 1; i < K; ++i) {
        lca = findLCA(lca, vertices[i]);
    }
    
    // Perform BFS to calculate the size of the subtree rooted at LCA
    queue<int> q;
    q.push(lca);
    vector<bool> visited(adj.size(), false);
    visited[lca] = true;
    int size = 0;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ++size;
        
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    
    return size;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    adj.resize(N + 1);
    depth.resize(N + 1);
    parent.resize(N + 1);
    
    for (int i = 0; i < N - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> vertices(K);
    for (int i = 0; i < K; ++i) {
        cin >> vertices[i];
    }
    
    // Perform BFS from an arbitrary root (let's choose 1)
    bfs(1);
    
    // Find the minimum subtree size that contains all K vertices
    int result = findMinSubtree(K, vertices);
    cout << result << endl;
    
    return 0;
}
