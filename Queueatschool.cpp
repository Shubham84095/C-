#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num, sec;
    cin >> num >> sec;
    vector<char> v(50);
    for (int i = 0; i < num; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < sec; i++)
    {
        for (int j = 0; j < num - 1; j++)
        {
            if (v[j] == 'B' && v[j + 1] == 'G')
            {
                swap(v[j], v[j + 1]);
                j += 1;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}