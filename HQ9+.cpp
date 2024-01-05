#include <bits/stdc++.h>
using namespace std;

int main()
{
    string P;
    cin >> P;

    for (int i = 0; i < P.length(); i++)
    {
        if(P[i]=='H' || P[i]=='Q' || P[i]=='9')
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}