#include <bits/stdc++.h>
using namespace std;


int main()
{
    int k;
    cin >> k;

    string input;
    cin >> input;

    int str_len = input.length();

    // if k = 1 
    if( k == 1 )
    {
        for(int i = 0; i < str_len; i++){
            cout << input[i];
        }
        return 0;
    }

    // if k is not dividing str_len
    if( str_len % k != 0 || k > str_len )
    {
        cout << "-1";
        return 0;
    }

    vector <int> Alpha_count (26,0);

    for(int i = 0; i < str_len; i++)
    {
        Alpha_count[input[i]-'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(Alpha_count[i] % k)
        {
            cout << "-1";
            return 0;
        }
    }

    string ans;

    for(int i = 0; i < 26; i++){
        int times = Alpha_count[i] / k;
        for(int j = 0; j < times; j++){
            ans.push_back('a'+i);
        }
    }

    int ans_len = ans.length();

    int cout_times = str_len / ans_len;

    while(cout_times--)
    {
        for(int i = 0; i < ans_len; i++){
            cout << ans[i];
        }
    }
    return 0;
}