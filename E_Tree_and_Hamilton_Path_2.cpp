#include <iostream>
#include <vector>
using namespace std;

// Function to add an edge to the graph
void addEdge(vector<pair<int, int>> adj[], int u, int v, int weight) {
    adj[u].push_back(make_pair(v, weight));
    adj[v].push_back(make_pair(u, weight));
}

// Function to perform DFS and calculate the farthest node and the distance
void DFS(vector<pair<int, int>> adj[], vector<bool>& visited, int& farthestNode, int node, int& maxDistance, int currentDistance) {
    visited[node] = true;
    if (currentDistance > maxDistance) {
        maxDistance = currentDistance;
        farthestNode = node;
    }
    for (auto& neighbor : adj[node]) {
        if (!visited[neighbor.first]) {
            DFS(adj, visited, farthestNode, neighbor.first, maxDistance, currentDistance + neighbor.second);
        }
    }
}

// Function to find the tree diameter
int findTreeDiameter(vector<pair<int, int>> adj[], int N) {
    vector<bool> visited(N + 1, false);
    int farthestNode = 0;
    int maxDistance = 0;
    
    // First DFS to find one endpoint of the longest path
    DFS(adj, visited, farthestNode, 1, maxDistance, 0);
    
    // Reset visited array and maxDistance
    fill(visited.begin(), visited.end(), false);
    maxDistance = 0;
    
    // Second DFS from the farthestNode found in first DFS
    DFS(adj, visited, farthestNode, farthestNode, maxDistance, 0);
    
    return maxDistance;
}

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> adj[N + 1];
    long long totalLength = 0;
    
    for (int i = 0; i < N - 1; ++i) {
        int A, B;
        long long C;
        cin >> A >> B >> C;
        addEdge(adj, A, B, C);
        totalLength += C;
    }
    
    // The total length of all edges multiplied by 2 minus the diameter
    long long diameter = findTreeDiameter(adj, N);
    long long result = 2 * totalLength - diameter;
    
    cout << result << endl;
    
    return 0;
}
