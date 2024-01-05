#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;


int main()
{
    string s;
    cin >> s;
    bool check = true;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            s.erase(s.begin() + i);
            check = false;
            break;
        }
    }

    if(check) s.erase(s.length()-1);
    cout << s << endl;

    return 0;
}