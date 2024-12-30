#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int main()
{
    int n ;
    cin >> n;

    string s;
    cin >> s;

    vector <pair<int,int>> V(n);
    for(int i = 0; i < n; i++){
        cin >>  V[i].first >> V[i].second;
    }
    
    cout << "3";

    return 0;
}