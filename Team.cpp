#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> A(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i][0] + A[i][1] + A[i][2] >= 2)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}