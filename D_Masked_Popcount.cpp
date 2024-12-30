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

int getBit(int n, int pos){
  return ((n & (1 << pos)) != 0);
}

ll bitLength(ll n) {
    int length = 0;
    while (n > 0) {
        length++;
        n >>= 1;
    }
    return length;
}

int getBit(int n, int pos){
  return ((n & (1 << pos)) != 0);
}

void Solution()
{
    ll n, m;
    cin >> n >> m;

    int s = bitLength(m);
    int j = bitLength(n);

    int p = j-1;
    ll fac = 1;
    for(int i = 0; i < p; i++){
        fac *= 2;
    }

    int l = min(0LL, min(p, s));
    ll cnt = 0;
    for(int i = 0; i < l; i++){
        if(getBit(m, i)) cnt++;
    }    
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