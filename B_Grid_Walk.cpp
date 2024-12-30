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
    int n, m;
    cin >> n >> m;

    int x, y;
    cin >> x >> y;
    x--, y--;
    vector <string> V(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    string A;
    cin >> A;

    for(int i = 0; i < (int)(A.length()); i++){
        if(A[i] == 'L' && y >= 1 && V[x][y-1] == '.'){
            y--;
        }
        else if(A[i] == 'R' && y <= m-2 && V[x][y+1] == '.'){
            y++;
        }
        else if(A[i] == 'U' && x >= 1 && V[x-1][y] == '.'){
            x--;
        }
        else if(A[i] == 'D' && x <=n-2 && V[x+1][y] == '.'){
            x++;
        }
    }

    cout << x+1 << " " << y+1 << endl;
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