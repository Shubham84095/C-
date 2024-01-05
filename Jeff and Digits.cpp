#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    int count_5 = 0, count_0 = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 5)
        {
            count_5++;
        }
        if (A[i] == 0)
        {
            count_0++;
        }
    }

    if (count_0 == 0)
    {
        cout << "-1";
        return 0;
    }
    if (count_0 > 0)
    {
        if (count_5 < 9)
        {
            cout << "0";
            return 0;
        }

        int temp = count_5 / 9;
        for (int i = 1; i <= (temp) * 9; i++)
        {
            cout << "5";
        }
        for (int i = 1; i <= (count_0); i++)
        {
            cout << "0";
        }
        
    }

    return 0;
}