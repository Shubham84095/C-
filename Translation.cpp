#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, w;
    cin >> s >> w;

    if (s.length() != w.length())
    {
        cout << "NO";
        return 0;
    }

    if (s.length() == w.length())
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != w[w.length() - 1 - i])
            {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";

    return 0;
}