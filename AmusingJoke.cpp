#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name_1, name_2, mix;
    cin >> name_1 >> name_2 >> mix;

    if (name_1.length() + name_2.length() != mix.length())
    {
        cout << "NO";
        return 0;
    }

    sort(mix.begin(), mix.end());

    name_1.append(name_2);

    sort(name_1.begin(), name_1.end());

    for (int i = 0; i < name_1.length(); i++)
    {
        if (mix[i] != name_1[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}