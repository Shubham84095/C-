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
    ll n;
    cin >> n;

    string s, t = "";
    cin >> s;

    int len = s.length();
    int ptr1 = 0;
    bool shouldReverse = false;

    for (int i = 0; i < len / 2; i++)
    {
        if(s[ptr1] == s[len - ptr1 -1]){
            ptr1++;
        }
        else if(s[ptr1] > s[len - ptr1 -1]){
            shouldReverse = true;
            break;
        }
        else{
            break;
        }
    }

    for (int i = len - 1; i >= 0; i--)
    {
        t += s[i];
    }

    if (shouldReverse)
    {
        cout << t + s << '\n';
    }
    else
    {
        cout << s << '\n';
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