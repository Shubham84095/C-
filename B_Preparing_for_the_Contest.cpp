#include <bits/stdc++.h>
using namespace std;

void Solution()
{
    int n, k;
    cin >> n >> k;
    
    int temp = n - k;
    int num = n - k;
    while(temp--){
        cout << (num--) << " ";
    }

    int res = (n-k) + 1;
    while(k--){
        cout << res++ << " ";
    }
    cout << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}