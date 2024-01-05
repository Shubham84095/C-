#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int main()
{
    int n, count = 1;
    cin >> n;

    vector <int> V(n);
    for(auto& elements : V){
        cin >>  elements;
    }

    if(n == 2){
        (abs(V[1] - V[0]) == 2)? cout << 2 : cout << 1;
        exit(0);
    }

    ll sum  = 0;
    for(int i = 1;  i < n-1;  i++){
        sum += (V[i] - V[0]);
        if(V[i] == V[0]){
            count ++;
        }
    }
    V[n-1] += sum;
    cout << ((abs(V[0] - V[n-1])%(n-1) == 0) ? n : n-1) << endl;

    return 0;
}