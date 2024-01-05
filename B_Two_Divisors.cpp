#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

ll gcd (ll a, ll b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}

inline ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}

void Solution()
{
    ll a, b;
    cin >> a >> b;

    if(lcm(a,b) == b){
        cout << lcm(a,b)*(b/a) << "\n";
    }
    else{
        cout << lcm(a,b) << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}