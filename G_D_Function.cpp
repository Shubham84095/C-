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
const int M = 1e9 + 7;
//const int N = 1e7 + 10;

int modEXP(ll x, ll y, const int p) 
{ 
    int res = 1;
 
    x = x % p; 
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
 
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
}

void Solution()
{
    int l, r, k;
    cin >> l >> r >> k;

    // let difine sequence as an, an-1, an-2,... , a2, a1;
    // let define sum(a1, an) = SUM
    // if(k >= 10) k can be written as (b1*(10^k) + b2*(10^(k-1))...)
    // where each b1, b2 ,... is less than 10
    // so k*D(n) = D(b1*n) + D(b2*n)+....; since 10^k will only contribute 0 at the end of every number
    // where D(k*n) = [bi]*(a1+a2+..+an);  where[] is G.I.F ans 1 <= i <= n;
    // for equality bi*ai <= 9 
    // which is not possible for k >= 10
    // so the answer will be 0 for k >= 10
    // but for k < 10
    // take as l = 1, r = 2, k = 3;
    // take num = 33
    // k <= [9/3]


    if(k >= 10){
        cout << "0\n";
        return;
    }

    ll an = floor(9/k);
    ll ai = an+1;
    ll B = modEXP(ai, r, M);
    ll C = modEXP(ai, l, M);
    if(B < C) B += M;
    ll res = (((B-C)%M))%M;
    cout << res << endl;
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