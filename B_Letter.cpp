#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    vector <int> V(127,0);

    for(int i = 0; i < s1.length(); i++){
        V[s1[i]]++;
    }

    for(int i = 0; i < s2.length(); i++){
        if(s2[i] != ' '){
            V[s2[i]]--;
        }
    }

    for(int i = 0; i < 127; i++){
        if(V[i] < 0){
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return 0;
}