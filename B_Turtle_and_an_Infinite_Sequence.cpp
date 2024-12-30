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

int setBit(int n, int pos){
  return (n | (1 << pos));
}

int solve(int n, int m){
    int lo = max(0LL, n-m);
    int hi = n + m;
    int ans = 0;
    int prod = 1;
    int diff = hi - lo;

    for(int i = 0; i < 32; i++){
        if(diff >= prod){
            ans = setBit(ans, i);
        }
        else{
            int bit1 = getBit(lo, i);
            int bit2 = getBit(hi, i);

            if((bit1|bit2)){
                ans = setBit(ans, i);
            }
        }

        prod *= 2;
    }

    return ans;
}

void Solution()
{
    ll n, m;
    cin >> n >> m;

    if(m == 0){
        cout << n << endl;
    }
    else if(m == 1){
        if(n == 0) cout << (0|1) << endl;
        else cout << ((n-1)|n|(n+1)) << endl;
    }
    else{
        if(n == 0){
            cout << solve(1, m-1) << endl;
        }
        else{
            cout << solve(n, m) << endl;
        }
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