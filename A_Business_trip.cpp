#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    vector<int> V(12);

    for (int i = 0; i < 12; i++)
    {
        cin >> V[i];
    }

    if (k == 0)
    {
        cout << "0";
        return 0;
    }

    sort(V.begin(), V.end());
    int sum = 0, count = 0;
    for (int i = 11; i >= 0; i--)
    {
        sum += V[i];
        count++;
        if (sum >= k)
        {
            cout << count;
            return 0;
        }
        if(i==0 && sum<k){
            cout<<"-1";
            return 0;
        }
    }

    return 0;
}