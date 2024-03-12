#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n, sum = 0;
    cin >> n;

    vector <int> V(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    sort(V.begin(), V.begin()+n);
    for(int i = 1; i <n; i++){
        sum += (V[i] - V[i-1]);
    }

    cout << sum << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}