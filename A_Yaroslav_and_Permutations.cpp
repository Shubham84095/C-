#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;


int main()
{
    int n, temp;
    cin >> n;
    vector <int> V, S(1001,0);

    for(int i = 0; i < n; i++){
        cin >> temp;
        V.push_back(temp);
        S[temp]++;
    }
    
    sort(S.begin(), S.end(), greater<int>());

    int sum = 0;
    for(int i = 0; i < 100; i++){
        sum += S[i];
    }
    sum -= S[0];

    if((sum) < S[0] -1 ){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }

    return 0;
}