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

class DisjointSets {
private:
    vector<int> parents;  // Stores the parent of each element
    vector<int> sizes;    // Stores the size of each set
    int componentCount;        // Stores the number of connected components

public:
    DisjointSets(int size) : parents(size), sizes(size, 1), componentCount(size) {
        for (int i = 0; i < size; i++) {
            parents[i] = i;  // Initially, each element is its own parent
        }
    }

    /** 
     * @return the "representative" node in x's component 
     * This method implements path compression.
     */
    int find(int x) {
        if (parents[x] != x) {
            parents[x] = find(parents[x]); // Path compression
        }
        return parents[x];
    }

    /**
     * @return whether the merge changed connectivity
     * This method implements union by size.
     */
    bool unite(int x, int y) {
        int x_root = find(x);
        int y_root = find(y);
        if (x_root == y_root) {
            return false;  // x and y are already in the same set
        }

        if (sizes[x_root] < sizes[y_root]) {
            swap(x_root, y_root); // Ensure the larger set becomes the root
        }
        sizes[x_root] += sizes[y_root];
        parents[y_root] = x_root;
        --componentCount; // Decrement the number of connected components
        return true;
    }

    /** 
     * @return whether x and y are in the same connected component 
     */
    bool connected(int x, int y) {
        return find(x) == find(y);
    }

    /**
     * @return the number of connected components
     */
    int countComponents() {
        return componentCount;
    }

    /**
     * @return the size of the set containing x
     */
    int sizeOf(int x) {
        return sizes[find(x)];
    }
};

void Solution()
{
    int n, m;
    cin >> n >> m;

    vector <pair <int, int>> con(m);
    DisjointSets dsu(n+1);
    vector <int> edges(n+1);
    for(auto& i: con){
        cin >> i.first >> i.second;
        dsu.unite(i.first, i.second);
    }

    for(auto& i:con){
        edges[dsu.find(i.first)]++;
    }

    for(auto& i: con){
        int sz = dsu.sizeOf(i.first);
        if(sz >= 2)
        if(edges[dsu.find(i.first)] < ((sz*(sz-1))/2)){
            no();
            return;
        }
    }
    yes();
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