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
    ll sx,sy,tx,ty;
    cin >> sx >> sy >> tx >> ty ;


    ll ans = 0;
    ans +=  abs(sy-ty);

    ll reqX = abs(sx-tx);

    ll xp = sx;
    if(sx % 2 == 1 && sy % 2 == 0) xp += ans;
    else if(sy%2 == 1 && sx%2 == 0) xp += ans+1;

    ll xn = sx;
    if(sx % 2 == 1 && sy % 2 == 0) xn -= ans+1;
    else if(sy%2 == 1 && sx%2 == 0) xn -= ans;

    // cout << xn << " " << xp << " " << ans << endl;

    if(reqX <= ans){
        cout << ans << endl;
    }
    else{
        if(tx >= sx){
            ans += (tx-xp)/2;
        }
        else{
            ans += (tx-xn)/2;
            if(ty%2 == 1) ans++;
        }
        cout << ans << endl;
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