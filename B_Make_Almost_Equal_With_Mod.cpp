#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int diffEle(vector<ll>& mod, int n){
    sort(mod.begin(), mod.end());
    int count = 0;
    for(int i = 0; i < n-1; i++){
        if(mod[i] != mod[i+1]){
            count++;
        }
    }
    return count;
}

void Solution()
{
    int n;
    cin >> n;

    vector <ll> nums(n), mod(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        mod[i] = nums[i]%2;
    }
    if(diffEle(mod, n) == 2){
        cout << "2\n";
    }
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