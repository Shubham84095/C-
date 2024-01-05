#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;

    cin >> n >> a >> b;

    int ans = n - a;

    if (ans > b + 1)
    {
        ans = ans - (ans - b - 1);
    }

    cout << ans;

    return 0;
}