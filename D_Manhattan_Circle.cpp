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

void Solution()
{
    int n, m;
    cin >> n >> m;
    vector <vector <char>> V(n, vector <char> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> V[i][j];
        }
    }

    int x, y = 0, xcnt = 0, ycnt = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        int maxi = 0;
        for (int j = 0; j < m; j++) {
            if (V[i][j] == '#') {
                cnt++;
                maxi = max(maxi, cnt);
            } else {
                cnt = 0;
            }
        }
        if (maxi > xcnt) {
            xcnt = maxi;
            x = i;
        }
    }

    for (int j = 0; j < m; j++) {
        int cnt = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            if (V[i][j] == '#') {
                cnt++;
                maxi = max(maxi, cnt);
            } else {
                cnt = 0;
            }
        }
        if (maxi > ycnt) {
            ycnt = maxi;
            y = j;
        }
    }

    int idxx = 0;
    for(int i = 0; i < m; i++){
        if(V[x][i] == '#'){
            idxx = i;
            break;
        }
    }
    int idxy = 0;
    for(int i = 0; i < n; i++){
        if(V[i][y] == '#'){
            idxy = i;
            break;
        }
    }

    x = idxx + (xcnt/2);
    y = idxy + (ycnt/2);
    cout << y+1 << " " << x+1 << endl;
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