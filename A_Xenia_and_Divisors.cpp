#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

int main()
{
    int n;
    cin >> n;

    vector<int> V(8, 0);

    int temp, num = n;
    while (num--)
    {
        cin >> temp;
        V[temp]++;
    }

    if ((V[1] == n / 3) && (V[1] + V[2] + V[3] + V[4] + V[6] == n))
    {
        int count2 = V[2], count3 = V[3], count4 = V[4], count6 = V[6];

        if (count3 <= count6)
        {
            for (int i = 0; i < count3; i++)
            {
                cout << "1 3 6\n";
            }
            if (count2 == count4 + count6 - count3)
            {
                for (int i = 0; i < count4; i++)
                {
                    cout << "1 2 4\n";
                }
                for (int i = 0; i < (count6 - count3); i++)
                {
                    cout << "1 2 6\n";
                }
            }
            else{
                cout << "-1\n";
            }
        }
        else
        {
            cout << "-1\n";
        }
    }
    else
    {
        cout << "-1\n";
    }

    return 0;
}