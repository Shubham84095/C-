#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'O' || word[i] == 'I' || word[i] == 'U' || word[i] == 'y' || word [i] == 'Y')
        {
            word.erase(word.begin() + i);
            i -= 1;
        }

        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] = word[i] - 'A' + 'a';
        }
    }

    int t = word.length(), j = 0;

    string store;

    for (int i = 0; i < 2 * t; i++)
    {
        if (!(i % 2))
        {
            store.push_back('.');
        }
        else
        {
            store.push_back(word[j]);
            j++;
        }
    }

    int p = store.length();
    for (int i = 0; i < p; i++)
    {
        cout << store[i];
    }

    return 0;
}