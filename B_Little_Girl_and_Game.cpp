#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int main()
{
    string s;
    cin >> s;

    int len = s.length(), count = 0;
    vector <int> V(26,0);

    for(int i = 0; i < len; i++){
        V[(s[i]-'a')]++;
    }

    for(int i = 0; i < 26; i++){
        if(V[i] % 2){
            count++;
        }
    }

    if((count%2 || count == 0)){
        cout << "First" << endl;
    }
    else{
        cout << "Second" << endl;
    }
    return 0;
}