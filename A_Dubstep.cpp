#include <bits/stdc++.h>
using namespace std;

int main()
{
    string V;
    cin >> V;

    string B;
    string C = " ";
    int str_len = V.length();
    for (int i = 0; i < str_len; i++)
    {
        if (i < str_len - 2 && V[i] == 'W' && V[i + 1] == 'U' && V[i + 2] == 'B')
        {
            if (i != 0 && i + 2 != str_len - 1)
            {
                bool check = true;
                if (V[i + 3] == 'W' && V[i + 4] == 'U' && V[i + 5] == 'B')
                {
                    check = false;
                }
                if (check)
                    B.push_back(C[0]);
                i += 2;
            }
            else
            {
                i += 2;
            }
        }

        else
        {
            B.push_back(V[i]);
        }
    }
    int t = B.length();
    int count = 0;
    for (int i = 0; i < t, B[i] == C[0]; i++)
    {
        count++;
    }
    while (count--)
    {
        B.erase(0, 1);
    }
    int u = B.length();
    for (int i = 0; i < u; i++)
    {
        cout << B[i];
    }

    return 0;
}