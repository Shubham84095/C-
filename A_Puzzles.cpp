#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, min = INT_MAX, temp;
    cin >> n >> m;

    vector<int> V(m);

    for (int i = 0; i < m; i++)
    {
        cin >> V[i];
    }

    sort(V.begin(), V.end());

    int *ptr = &V[0];

    while ((ptr + n - 1) <= &V[m - 1])
    {
        temp = *(ptr + n - 1) - *ptr;
        if (temp < min)
        {
            min = temp;
        }
        ptr++;
    }

    cout << min << endl;

    return 0;
}