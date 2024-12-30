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
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

inline double distance(int x, int y){
    return sqrt(x*x + y*y);
}

void Solution()
{
    int r;
    cin >> r;

    int ans = 0;
    int bound = pow(r+1, 2);
    for(int y = 0; y <= r; y++){
        double a = sqrt(bound-1-y*y);
        double b = sqrt(r*r - y*y);
        // cout << b << " " << a << endl;
        ans += (floor(a) - ceil(b) + 1);
    }

    cout << ans*4-4 << endl;
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