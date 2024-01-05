#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int n;
    ll int l, max_diff = 0;
    cin >> n >> l;

    vector <ll int> lan_pos(n);
    for(int i = 0; i < n; i++)
    {
        cin >> lan_pos[i];
    }

    if( n == 1)
    {
        max_diff = max((lan_pos[0] - 0), (l - lan_pos[0])) ;
        double temp = (double)max_diff;
        cout << fixed << setprecision(10) << temp;
        return 0;
    }

    sort(lan_pos.begin(), lan_pos.end());

    for (int i = 1; i < n; i++){
        int tempDiff = lan_pos[i] - lan_pos[i - 1];
        if (tempDiff > max_diff)
        {
            max_diff = tempDiff;
        }
    }

    ll int first_diff = lan_pos[0] - 0;
    ll int last_diff = l - lan_pos[n-1];

    if(first_diff >= (max_diff/2.0) || last_diff >= (max_diff/2.0)){
        double temp = (double)(max(first_diff, last_diff));
        cout << fixed << setprecision(10) << temp;
        return 0;
    }
    else
    {
        cout << fixed << setprecision(10) << max_diff/2.0;
    }



    return 0;
}