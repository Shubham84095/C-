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
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> F(n, 0);
    vector<bool> visited(n, false);
    string s;
        
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--; 
    }
    cin >> s;
        
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int cntB = 0;
            int st = i;
            vector<int> cycle;
                
            while (!visited[st]) {
                visited[st] = true;
                cycle.push_back(st);
                if (s[st] == '0') cntB++;
                st = p[st];
            }
                
            for (int idx : cycle) {
                F[idx] = cntB;
            }
        }
    }
        
    for (int i = 0; i < n; i++) {
        cout << F[i] << " ";
    }
    cout << endl;
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