#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
// #define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
#define Vll(V,n,m) vector<vector<int,int>> V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;


void Solution()
{
    int n;
    cin >> n;

    vector <pair<int,int>> V(n);
    if(0 < n) V[0] = make_pair(1,1);
    if(1 < n) V[1] = make_pair(2,1);
    if(2 < n) V[2] = make_pair(1,3);

    int X = 4, Y = 4;

    for(int i = 3; i < n; i++){
        V[i] = make_pair(X++,Y++);
    }

    for(int i = 0; i < n; i++){
        cout << V[i].first << " " << V[i].second << endl;
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // t = 1
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}