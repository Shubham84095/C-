#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m, temp;
    cin >> n >> m;

    vector <int> V,A;
    
    for(int i = 0; i < m; i++){
        cin >> temp;
        V.push_back(temp);
        A.push_back(temp);
    }

    int size = V.size();

    sort(V.begin(), V.end());
    sort(A.begin(), A.end());

    int maxSum = 0;
    int minSum = 0;

    int a, b;
    a = n, b = n;

    while(a--){
        maxSum += (V[size-1]--);
        sort(V.begin(), V.end());
    }
    int i = 0;
    while(b--){
        minSum += (A[i]--);
        if(A[i] < 1) i++;
        sort(A.begin(), A.end());
    }

    cout << maxSum << " " << minSum << endl;
    return 0;
}