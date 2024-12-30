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
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    int g,h,i,j,k,l;
    cin >> g >> h >> i >> j >> k >> l;

    if((max(min(a,d),min(g,j))<min(max(a,d),max(g,j))) && (max(min(b,e),min(h,k))<min(max(b,e),max(h,k))) && (max(min(c,f),min(i,l))<min(max(c,f),max(i,l)))){
        cout << "Yes\n";
    }
    else cout << "No\n";
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