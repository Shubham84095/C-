#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
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

    vector <vector<int>> V(n, vector <int> (m));
    vector <vector<int>> T(n, vector <int> (m));
    map<int, pair<int, int>> mp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> V[i][j];
            mp[V[i][j]].first = i;
            mp[V[i][j]].second = j;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> T[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j < m; j++){
            if(mp[T[i][j]].first != mp[T[i][0]].first){
                no();
                return;
            }
        }
    }

    for(int j = 0; j < m; j++){
        for(int i = 1; i < n; i++){
            if(mp[T[i][j]].second != mp[T[0][j]].second){
                no();
                return;
            }
        }
    }

    yes();
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