#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{

    int n;
    cin >> n;

    point V[n];

    for (int i = 0; i < n; i++)
    {
        cin >> V[i].x;
        cin >> V[i].y;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        bool bool1 = false, bool2 = false, bool3 = false, bool4 = false;
        for (int j = 0; j != i, j < n; j++)
        {
            if (V[i].x == V[j].x && V[j].y - V[i].y >= 1)
            {
                bool1 = true;
            }
            if (V[i].x == V[j].x && V[j].y - V[i].y <= -1)
            {
                bool2 = true;
            }
            if (V[i].y == V[j].y && V[j].x - V[i].x >= 1)
            {
                bool3 = true;
            }
            if (V[i].y == V[j].y && V[j].x - V[i].x <= -1)
            {
                bool4 = true;
            }
        }
        if (bool1 && bool2 && bool3 && bool4)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}