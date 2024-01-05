#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pages, sum = 0;
    cin >> pages;

    vector<int> days(7);

    for (int i = 0; i < 7; i++)
    {
        cin >> days[i];
    }

    for (int i = 1; i <= 7; i++)
    {

        sum += days[i - 1];

        if (sum == pages)
        {
            cout << i;
            return 0;
        }
        if (sum > pages)
        {
            cout << i;
            return 0;
        }
        if (i == 7)
        {
            i = 0;
        }
    }

    return 0;
}