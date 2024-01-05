#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, num;
    cin >> n >> k;

    long long int lim = (n % 2) ? (n / 2) + 1 : n / 2;

    if (k > lim)
    {
        k = k - lim;
        num = 2 + (k - 1) * 2;
        cout << num  ;
        return 0;
    }

    num = 1 + (k - 1) * 2;
    cout << num ;

    return 0;
}