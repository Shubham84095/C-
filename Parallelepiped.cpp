#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k1, k2, k3;
    cin >> k1 >> k2 >> k3;

    int a, b, c;

    a = sqrt((k3 * k1) / k2);
    b = sqrt((k1 * k2) / k3);
    c = sqrt((k2 * k3) / k1);

    cout << 4 * (a + b + c);

    return 0;
}