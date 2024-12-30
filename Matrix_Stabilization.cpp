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

void solve(vector<vector<int>>& V, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a = -1, b = -1, c = -1, d = -1;
            if (i + 1 < n) a = V[i + 1][j];
            if (i - 1 >= 0) b = V[i - 1][j];
            if (j + 1 < m) c = V[i][j + 1];
            if (j - 1 >= 0) d = V[i][j - 1];
            int curr = V[i][j];
            if (curr > a && curr > b && curr > c && curr > d) {
                int x = max(a, b);
                int y = max(c, d);
                int z = max(x, y);
                V[i][j] = z;
            }
        }
    }
}
void Solution()
{
    int n, m;
    cin >> n >> m;
    vector <vector <int>> V(n, vector <int> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> V[i][j];
        }
    }

    for(int i = 0; i < 1; i++){
        solve(V, n, m);
    }

    for(int i = 0; i< n; i++){
        for(int j = 0; j < m; j++){
            cout << V[i][j] << " ";
        }
        cout << endl;
    }

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