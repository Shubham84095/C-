#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    vector<int> V(26, 0);

    for (int i = 0; i < name.length(); i++)
    {
        int idx = name[i] - 'a';
        V[idx]++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (V[i] != 0)
            count++;
    }

    (count % 2) ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!";

    return 0;
}