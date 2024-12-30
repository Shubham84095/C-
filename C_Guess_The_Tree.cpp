#include <bits/stdc++.h>
#define int long long int
#define endl '\n'

using namespace std;

void Solution() {
    int n;
    cin >> n;

    set<int> s;
    for (int i = 2; i <= n; i++) {
        s.insert(i);
    }

    queue<int> q;
    q.push(1);
    map<int, vector<int>> mp;
    map <int, bool> V;

    while (!q.empty() && !s.empty()) {
        int u = q.front();
        auto it = s.begin();
        while (it != s.end()) {
            int v = *it;
            cout << "? " << u << " " << v << endl;
            cout << flush;
            int x;
            cin >> x;

            if (x == -1) return;
            if (x == u) {
                mp[u].push_back(v);
                if(!V[v]){
                    q.push(v);
                    V[v] = true;
                }
                it = s.erase(it);  
            } else {
                mp[u].push_back(x);
                if(!V[x]){
                    q.push(x);
                    V[x] = true;
                }
                if(s.find(x) != s.end()){
                    s.erase(x);
                }
                else{
                    it++;
                }
            }
        }
        q.pop();
    }


    cout << "! ";
    vector<bool> vis(n + 1, false);  
    for (auto &e : mp) {
        vis[e.first] = true;
        for (auto &z : e.second) {
            if (!vis[z]) {
                cout << e.first << " " << z << " ";
                vis[z] = true;
            }
        }
    }
    cout << endl;  // Properly format the output
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        Solution();
    }

    return 0;
}
