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
    vector <vector <int>> V(n, vector<int>(m)), S(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c;
            cin >> c;
            V[i][j] = c - '0';
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c;
            cin >> c;
            S[i][j] = c - '0';
        }
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < m-1; j++){
            while(S[i][j] != V[i][j]){
                S[i][j] = (S[i][j]+1)%3;
                S[i+1][j+1] = (S[i+1][j+1]+1)%3;
                S[i+1][j] = (S[i+1][j]+2)%3;
                S[i][j+1] = (S[i][j+1]+2)%3; 
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(V[i][j] != S[i][j]){
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