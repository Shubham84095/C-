#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int main()
{
    int n, temp, k;
    cin >> n >> k;

    vector <int> V, S;
    for(int i = 0; i < n; i++){
        cin >> temp;
        V.push_back(temp);
    }

    for(int i = 0; i <= (n-k); i++){
        int sum = 0;
        for(int j = i; j < (i+k); j++){
            sum += V[j];
        }
        S.push_back(sum);
    }

    // for(int i = 0; i < S.size(); i++){
    //     cout << S[i] << " ";
    // }
    // cout << endl;

    int maxFence = INT_MAX, sumMin = INT_MAX, minIdx = 0;
    for(int i = 0; i < S.size(); i++){
        if((S[i] < sumMin)){
            sumMin = S[i];
            minIdx = i;
        }
        if(S[i] == sumMin && (maxFence > *max_element(V.begin()+i, V.begin()+i+k))){
            minIdx = i;
        }
    }

    cout << minIdx+1 << endl;

    return 0;
}