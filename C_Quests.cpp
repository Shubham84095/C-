#include <bits/stdc++.h>
using namespace std;

int maxTempSum(vector <int>& v1, vector <int>& v2, int n, int k, int max){
    int sum = 0;
    
    sum = v1[n-1];

    int temp = k - n;
    sum += (temp)*(max);

    return sum;
}

void Solution()
{
    int n , k;
    cin >> n >> k;

    vector <int> v1(n);
    vector <int> v2(n);

    for(int i =0; i < n; i++){
        cin >> v1[i];
    }
    for(int i =0; i < n; i++){
        cin >> v2[i];
    }

    for(int i = 1; i < n; i++){
        v1[i] += v1[i-1];
    }

    int maxSum = 0;
    int tempSum = 0;
    int max = v2[0];

    for(int i = 0; (i < k) && (i < n); i++){
        if(max < v2[i]) max = v2[i];
        tempSum = maxTempSum(v1, v2, i+1, k, max);
        if(tempSum > maxSum){
            maxSum = tempSum;
        }
    }

    cout << maxSum << "\n";
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