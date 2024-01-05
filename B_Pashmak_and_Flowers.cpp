#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int main()
{
    int n;
    cin >> n;

    ll temp;

    vector <ll> flowers;

    for(int i = 0; i < n; i++){
        cin >> temp;
        flowers.push_back(temp);
    }

    sort(flowers.begin(), flowers.end());

    int i = 1;
    while((flowers[i] == flowers[i-1]) && i < n){
        i++;
    }

    if(i == n){
        cout << "0 " << (1LL*n *(n -1))/2 << endl;
        return 0;
    }

    int j = n - 1;
    while((flowers[j] == flowers[j-1]) && j > 0){
        j--;
    }

    cout << (flowers[n-1] - flowers[0]) << " " << 1LL*i*(n-j) << endl;

    return 0;
}