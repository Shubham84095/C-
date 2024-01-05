#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count_amazing = 0;
    cin >> n;

    vector<int> score(n);
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }

    int min = score[0], max = score[0];

    for (int i = 1; i < n; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
            count_amazing++;
        }
        if (score[i] < min)
        {
            min = score[i];
            count_amazing++;
        }
    }

    cout << count_amazing;

    return 0;
}