#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = 0;
    }

    int l1;
    cin >> l1;

    for (int i = 0; i < l1; i++)
    {
        int a;
        cin >> a;
        A[a - 1]++;
    }

    int l2;
    cin >> l2;

    for (int i = 0; i < l2; i++)
    {
        int a;
        cin >> a;
        A[a - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";

    return 0;
}
