#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int house_no = 1, temp;
    long long int steps = 0;

    while (m--)
    {
        temp = house_no;
        cin >> house_no;
        if (house_no < temp)
        {
            steps += (n - temp) + house_no;
        }
        else
        {
            steps += (house_no - temp);
        }
    }

    cout << steps;

    return 0;
}
