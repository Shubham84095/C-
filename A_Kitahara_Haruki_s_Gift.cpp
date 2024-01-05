#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int main()
{
    int n, count_1 = 0, count_2 = 0;
    cin >> n;

    vector <int> V(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }
    
    sort(V.begin(), V.end(), greater<int>());

    for(int i = 0; i < n; i++){
        if(count_2 > count_1) count_1 += V[i];
        else count_2 += V[i];
    }

    (count_2 == count_1)? cout << "YES\n" : cout << "NO\n";
    return 0;
}