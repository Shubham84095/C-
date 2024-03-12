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
    int n, first = -1, last = -1, count = 0;
    cin >> n;

    vector <int> V(n);

    for(int i = 0; i < n; i++){
        cin >> V[i];
        if(V[i]) last = i;
    }
    
    for(int i = 0; i < n; i++){
        if(V[i]){
            first = i;
            break;
        }
    }

    for(int i = first + 1; i < last; i++){
        if(V[i] == 0){
            count++;
        }
    }

    cout << count << '\n';
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