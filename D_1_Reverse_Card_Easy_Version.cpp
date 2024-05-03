#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n, m;
    cin >> n >> m;

    int lim = sqrt(m);
    int last = min(m,lim);
    ll ans = 0;
    ans += n;
    // cout << last << endl;

    for(int i = 2; i <= m; i++){
        int a = (n/i) + 1;
        int b = a/i;
        ans += b;
        // cout << ans << endl;
    }

    cout  << ans << '\n';
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