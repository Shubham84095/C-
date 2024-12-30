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
    int count = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i] == 'P'){
            if(i-1 >= 0 && s[i-1] == 'A'){
                s[i-1] = 'C';
            }
            if(i+1 < n && s[i+1] == 'A'){
                s[i+1] = 'C';
            }
            if(i+1 < n && s[i+1] != 'P'){
                i += 1;
            }
        }
    }

    // cout << s << "\n";

    for(int i = 0; i < n; i++){
        if(s[i] == 'P' || s[i] == 'C') count++;
    }

    cout << count << "\n";

    return 0;
}