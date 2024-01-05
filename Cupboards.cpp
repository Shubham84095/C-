#include <bits/stdc++.h>
using namespace std;

struct cupboards
{
    int door[2];
};

int main()
{

    int n;
    cin >> n;

    int left_open = 0, right_open = 0, left_closed = 0, right_closed = 0;

    cupboards A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i].door[0] >> A[i].door[1];
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i].door[0] == 1)
        {
            left_open++;
        }
        if (A[i].door[0] == 0)
        {
            left_closed++;
        }
        if (A[i].door[1] == 1)
        {
            right_open++;
        }
        if (A[i].door[1] == 0)
        {
            right_closed++;
        }
    }

    cout << min(left_closed, left_open) + min(right_closed, right_open);

    return 0;
}