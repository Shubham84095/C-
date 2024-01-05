#include <bits/stdc++.h>
using namespace std;

int min(vector<int> &A)
{
    int min = A[0], minIdx = 0;

    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] <= min)
        {
            min=A[i];
            minIdx = i;
        }
    }

    return minIdx;
}

int max(vector<int> &A)
{
    int max = A[0], maxIdx = 0;

    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] > max)
        {
            max=A[i];
            maxIdx = i;
        }
    }

    return maxIdx;
}

int main()
{
    int n, time;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int min_idx = min(A);
    int max_idx = max(A);

    

    if (min_idx < max_idx)
    {
        time = max_idx + (n - min_idx - 1) - 1;
    }
    else
    {
        time = max_idx + (n - min_idx - 1);
    }

    cout << time;

    return 0;
}