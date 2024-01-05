#include <bits/stdc++.h>
using namespace std;

bool isConsidered(string& s){
    int len = s.length();
    string t = "hello";
    if(len < 5){
        return false ;
    }

    int count = 0;
    int j = 0;

    for(int i = 0; i < len; i++){
        if(t[j] == s[i]){
            j++;
        }
        if(j == 5){
            break;
        }
    }
    if(j == 5){
        return true;
    }
    return false;
}

int main()
{
    string s;
    cin >> s;

    if(isConsidered(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}