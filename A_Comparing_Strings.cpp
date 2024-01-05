#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    if(s1.length() != s2.length()){
        cout << "NO\n";
        exit(0);
    }
    int idx1 = -1, idx2 = -1, count = 0, strLen = s1.length();
    for(int i = 0; i < strLen; i++){
        if(s1[i] != s2[i]){
            count++;
            idx2 = i;
        }
    }

    if(count == 2){
        for(int i = 0; i < strLen; i++){
            if(s1[i] != s2[i]){
                idx1 = i;
                break;
            }
        }
        (s1[idx1] == s2[idx2] && s1[idx2] == s2[idx1])? cout << "YES\n" : cout << "NO\n";
    }
    else if(count == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}