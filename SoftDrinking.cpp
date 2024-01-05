#include <bits/stdc++.h>
using namespace std;

int main()
{
    // n, k, l, c, d, p, nl, np
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int limit_1 = (l * k) / nl;
    int limit_2 = c * d;
    int limit_3 = p / np;

    cout << (min({limit_1, limit_2, limit_3})) / n;

    return 0;
}