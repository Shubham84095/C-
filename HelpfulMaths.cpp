#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A;
    cin >> A;

    if (A.length() < 2)
    {
        cout << A[0];
        return 0;
    }
    for (int j = 0; j < (A.length() - 1) / 2; j++)
    {
        for (int i = 2; i < A.length(); i += 2)
        {
            if (A[i - 2] > A[i])
            {
                swap(A[i - 2], A[i]);
            }
        }
    }

    for (int i = 0; i < A.length(); i++)
    {
        cout << A[i];
    }

    return 0;
}