#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
using namespace std;
typedef long long ll;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

void Solution()
{
    int n, firstB = 0, lastB = 0;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            firstB = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            lastB = i;
            break;
        }
    }

    if(firstB == 0 && lastB == 0 && s[0] != 'B'){
        cout << 0 << "\n";
    }
    else{
        cout << (lastB - firstB + 1) << "\n";
    }
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