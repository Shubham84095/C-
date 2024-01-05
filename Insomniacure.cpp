#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[5], count = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    for (int i = 1; i <= A[4]; i++)
    {
        if ((i % A[0] == 0) || (i % A[1] == 0) || (i % A[2] == 0) || (i % A[3] == 0))
            count++;
    }

    cout << count;

    return 0;
}