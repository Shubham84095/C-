#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
#define int long long int
#define endl '\n'
#define yes() cout << "YES" << endl
#define no() cout << "NO" << endl
using namespace std;
typedef long long ll;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    string s;
    cin >> s;

    int len = s.length();

    int addingValue = 0;
    int seqLen = 0;
    ll ans = 0;
    int limit = len - 1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
        {
            limit = i;
            break;
        }
    }

    if (limit == len - 1)
    {
        limit = len;
    }

    for (int i = limit; i < len; i++)
    {
        if (s[i] == '1')
        {
            seqLen++;
        }
        if (s[i] == '0')
        {
            ans += (seqLen + 1);
        }
    }

    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        Solution();
    }

    return 0;
}