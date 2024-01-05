#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, count = 0;
    cin >> n;

    string s;
    cin >> s;
    
    vector <int> key(26,0);

    int size = 2*n - 2;

    for (int i = 0; i < (size); i++){
        if(!(i % 2)){
            key[s[i]-'a']++;
        }
        else{
            if(key[s[i]-'A']){
                key[s[i]-'A']--;
            }
            else{
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}