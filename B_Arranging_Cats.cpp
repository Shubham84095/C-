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
    int n;
    cin >> n;

    string V,S;
    int count1 = 0, count2 = 0;
    cin >> V >> S;
    for(int i = 0; i < n; i++){
        if(V[i] == '1' && S[i] == '0'){
            count1++;
        }
        if(S[i] == '1' && V[i] == '0'){
            count2++;
        }
    }
    // cout << misMatch << " " << count1 << " " << count2 << "\n";
    cout  << max(count1, count2) << "\n";

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