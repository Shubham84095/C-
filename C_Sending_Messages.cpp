#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    ll n, f, a, b;
    ll temp = 0, sum = 0,store = 0;
    cin >> n >> f >> a >> b;
    cin >> temp;
    sum = min(temp*a, b);
    for(ll i = 1; i < n; i++){
        store = temp;
        cin >> temp;
        sum += min(a*(temp-store),b);
        // cout << "STUCK\n";
    }

    // cout << "sum : " << sum << " " << "percent : "<< f << "\n";
    (sum < f)? cout << "YES\n":cout << "NO\n"; 
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