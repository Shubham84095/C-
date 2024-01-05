#include <iostream>
#include <string>
using namespace std;

int main()
{

    string borze;
    int i = 0, j = 0;

    cin >> borze;

    while (i < borze.size())
    {
        if ((borze[i] == '.'))
        {
            cout << "0";

            i++;
        }
        if (borze[i] == '-' && borze[i + 1] == '-')
        {
            cout << "2";

            i += 2;
        }
        if (borze[i] == '-' && borze[i + 1] == '.')
        {
            cout << "1";

            i += 2;
        }
    }
    return 0;
}