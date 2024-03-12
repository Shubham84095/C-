#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = 10e5+1, b = 10e5 ;
    cout << a << " " ;
    for(int i = 0; i < n; i++){
        if(s[i] == '>'){
            cout << (--b) << " "; 
        }
        else cout << (++a) << " ";
    }

    return 0;
}