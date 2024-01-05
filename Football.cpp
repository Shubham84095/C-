#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int t = n - 1;
    int count_1 = 0;
    int count_2 = 0;

    string A, s1, s2;
    cin >> A;
    s1 = A;

    while (t--)
    {
        cin >> A;
        if (A != s1)
        {
            s2 = A;
            count_2++;
        }
        else
        {
            count_1++;
        }
    }

    if (count_2 > count_1)
    {
        for (int i = 0; i < s2.length(); i++)
        {
            cout << s2[i];
        }
    }
    else
    {
        for (int i = 0; i < s1.length(); i++)
        {
            cout << s1[i];
        }
    }

    return 0;
}