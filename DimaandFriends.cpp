#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, sum = 0, ways = 0;
    cin >> n;

    vector<int> fingers(n);

    for (int i = 0; i < fingers.size(); i++)
    {
        cin >> fingers[i];
        sum += fingers[i];
    }

    if (n == 1)
    {
        ways = (sum % 2) ? 3 : 2;
        cout << ways;
        return 0;
    }

    int an = ((sum - 1) / (n + 1)) + 1;
    int nth = 1 + (an) * (n + 1);

    for (int i = 1; i <= 5; i++)
    {
        if (i + sum == nth || i + sum == nth + n + 1)
        {
            ways++;
        }
    }

    cout << 5 - ways;

    return 0;
}