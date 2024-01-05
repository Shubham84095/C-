#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Solution()
{
    ll k, sumV = 0, sumS = 0;
    int n, m;
    cin >> n >> m >> k;

    vector<ll> V(n);
    vector<ll> S(m);

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
        sumV += V[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> S[i];
        sumS += S[i];
    }

    sort(V.begin(), V.end());
    sort(S.begin(), S.end());

    if (V[0] < S[m - 1])
    {
        sumV = sumV - V[0] + S[m-1];
        swap(V[0], S[m-1]);
    }
    sort(V.begin(), V.end());
    sort(S.begin(), S.end());
    if(!(k & 1)){
        if(S[0] < V[n-1]){
            sumV = sumV - V[n-1] + S[0];
        }
        cout << sumV << "\n";
        return;
    }

    cout << sumV << "\n";
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        Solution();
    }

    return 0;
}