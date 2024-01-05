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
    int n , k;
    cin >> n >> k;

    int seq[5];ll product = 1;
    for(int i = 0; i < n; i++){
        cin >> seq[i];
        product *= seq[i];
    }

    if(2023 % product){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        cout << 2023/product << " ";
        int temp = k-1;
        while(temp--){
            cout << "1 ";
        }
        cout << "\n";
    }

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