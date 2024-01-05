#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1, s2;

    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        s1[i] = (s1[i] <= 'Z') ? s1[i] - 'A' + 'a' : s1[i];
        s2[i] = (s2[i] <= 'Z') ? s2[i] - 'A' + 'a' : s2[i];

        if (s1[i] > s2[i])
        {
            cout << "1";
            return 0;
        }
        if (s1[i] < s2[i])
        {
            cout << "-1";
            return 0;
        }
    }

    cout<<"0";

    return 0;
}