#include <bits/stdc++.h>
using namespace std;

void Solution()
{
    long long sum = 0;
    int n;
    cin >> n;
    vector <long long> V(n),S(n);

    for(int i = 0; i < n; i++){
        V[i] = i+1;
    }

    long long numPermute = 1;
    for(int i = 2; i <= n; i++){
        numPermute *= i;
    }

    while(numPermute--){
        long long tempSum = 0;
        for(int i = 0; i < n; i++){
            S[i] = (i+1)*(V[i]);
        }
        sort(S.begin(), S.end());
        for(int i = 0; i < n-1; i++){
            tempSum += S[i];
        }
        sum = max(sum,tempSum);
        next_permutation(V.begin(), V.end());
        cout << "stuck" << endl;
    }

    cout << sum << "\n";
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