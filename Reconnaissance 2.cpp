#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int min_diff = 1001, idx_1 = 0, idx_2 = 1;

    vector<int> V(n);

    for (int i = 0; i < V.size(); i++)
    {
        cin >> V[i];
    }

    if (fabs(V[V.size() - 1] - V[0]) < min_diff)
    {
        min_diff = fabs(V[V.size() - 1] - V[0]);
        idx_2 = V.size() - 1;
    }

    for (int i = 0; i < V.size() - 1; i++)
    {
        if (fabs(V[i + 1] - V[i]) <= min_diff)
        {
            min_diff = fabs(V[i + 1] - V[i]);
            idx_1 = i, idx_2 = i + 1;
        }
    }

    cout << idx_1 + 1 << " " << idx_2 + 1;

    return 0;
}