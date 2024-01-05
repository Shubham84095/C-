#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, max = 0, max_idx = 0, diff;
    cin >> n >> m;

    vector<int> V(n);
    for (int i = 0; i < V.size(); i++)
    {
        cin >> V[i];
        if (max <= V[i])
        {
            max = V[i];
            max_idx = i;
        }
    }

    int div = max / m;
    diff = max - div * m;

    if (diff == 0)
    {
        int idx = 0;
        for (int i = 0; i < V.size(); i++)
        {
            if (V[i] > (max - m))
            {
                idx = i;
            }
        }
        cout << idx + 1;
        return 0;
    }

    int idx = 0;
    for (int i = 0; i < V.size(); i++)
    {
        if (V[i] > div * m)
        {
            idx = i;
        }
    }

    cout << idx + 1;

    return 0;
}