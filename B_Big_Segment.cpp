#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;

int main()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> V, S;
    ll tempMax = -1;

    for (int i = 0; i < n; i++)
    {
        int first, second;
        cin >> first >> second;
        if(second > tempMax) tempMax = second;
        V.push_back(make_pair(first, second));
        S.push_back(make_pair(first, second));
    }

    sort(V.begin(), V.end());

    bool check = false;
    ll yMax = -1, yMin = V[0].first;
    int i = 0;

    while (yMin == V[i].first)
    {
        if (V[i].second >= tempMax)
        {
            check = true;
            yMax = V[i].second;
        }
        i++;
    }

    if (check)
    {
        for (int i = 0; i < n; i++)
        {
            if (S[i].first == yMin && S[i].second == yMax)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}