#include <bits/stdc++.h>
using namespace std;

int max_idx_b(string &input, int idx)
{
    int ret_idx = -1;

    for (int i = 0; i < idx; i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            ret_idx = i;
        }
    }

    return ret_idx;
}

int max_idx_B(string &input, int idx)
{
    int ret_idx = -1;

    for (int i = 0; i < idx; i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            ret_idx = i;
        }
    }

    return ret_idx;
}

void Solution()
{
    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'b' || input[i] == 'B')
        {
            if (input[i] == 'b')
            {
                int idx = max_idx_b(input, i);
                if (idx != -1)
                {
                    input[i] = '0';
                    input[idx] = '0';
                }
                if (idx == -1)
                {
                    input[i] = '0';
                }
            }

            if (input[i] == 'B')
            {
                int idx = max_idx_B(input, i);
                if (idx != -1)
                {
                    input[i] = '0';
                    input[idx] = '0';
                }
                if (idx == -1)
                {
                    input[i] = '0';
                }
            }
        }
    }

    if (input.size() == 0)
    {
        cout << "\n";
        return;
    }

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != '0')
            cout << input[i];
    }

    cout << "\n";
    return;
}

int main()
{

    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Solution();
    }

    return 0;
}