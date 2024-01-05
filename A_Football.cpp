#include <bits/stdc++.h>
using namespace std;

int main()
{
    string position;
    cin >> position;

    int str_len = position.length();

    int count_0 = 1, count_1 = 1;
    int max_count0 = 0, max_count1 = 0;

    for (int i = 0; i < str_len - 1; i++)
    {
        if (position[i] == position[i + 1])
        {
            if (position[i] == '0')
            {
                count_0++;
            }    
            if(position[i] == '1')
            {
                count_1++;
            }
        }
        else
        {
            count_0 = 1;
            count_1 = 1;
        }

        
        if (count_0 > max_count0)
        {
            max_count0 = count_0;
        }
        if (count_1 > max_count1)
        {
            max_count1 = count_1;
        }
    }

    if (max_count0 >= 7 || max_count1 >= 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}