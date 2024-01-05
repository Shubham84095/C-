#include <bits/stdc++.h>
using namespace std;

bool is_factor(int n, int m)
{
    if (n % m == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n, m, max = 1;
    cin >> n;

    vector<int> s1(n);
    for (int i = 0; i < s1.size(); i++)
    {
        cin >> s1[i];
    }

    cin >> m;
    vector<int> s2(m);
    for (int i = 0; i < s2.size(); i++)
    {
        cin >> s2[i];
    }

    int temp = 1, count = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        for (int j = 0; j < s1.size(); j++)
        {
            if (is_factor(s2[i], s1[j]))
            {
                temp = s2[i] / s1[j];
                if (temp >= max)
                {
                    if (temp == max)
                    {
                        count++;
                    }
                    else
                    {
                        count = 1;
                    }
                    max = temp;
                }
            }
        }
    }

    cout << count;

    return 0;
}