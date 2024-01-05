#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;


int main()
{
    int n, m;
    cin >> n >> m;

    vector <int> A(n), B(m);
    for(auto &elements: A) cin >> elements;
    for(auto &elements: B) cin >> elements;

    int max_eleA = *max_element(A.begin(), A.end());
    int min_eleA = *min_element(A.begin(), A.end());
    int min_eleB = *min_element(B.begin(), B.end());

    if(min_eleA == max_eleA && 2*min_eleA < min_eleB){
        cout << 2*min_eleA;
    }
    else if(2*min_eleA <= max_eleA && min_eleB > max_eleA){
        cout << max_eleA;
    }
    else if(2*min_eleA > max_eleA && min_eleB > 2*min_eleA){
        cout <<  2*min_eleA;
    }
    else{
        cout << -1;
    }

    return 0;
}