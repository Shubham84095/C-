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
    int A[4][2];
    ll len = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cin >> A[i][j];
            if(i >= 1 && A[i][0] == A[0][0]){
                len = A[i][1] - A[0][1];
            }
        }
    }

    cout << 1LL*len*len << "\n";
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