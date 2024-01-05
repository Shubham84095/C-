#include <bits/stdc++.h>
using namespace std;

void Solution()
{
    string s;
    cin >> s;
    int count_1 = 0, count_0 = 0, len = s.length();
    if(len == 1){
        cout << "1\n";
        return;
    }

    for(int i = 0; i < len; i++){
        if(s[i] == '0') count_0++;
        else count_1++;
    }

    int i = 0;
    while(count_1 >= 0 && count_0 >= 0 && i < len){
        if(s[i] == '0') count_1--;
        else count_0--;
        i++;
    }

    if(i == len){
        if(count_0 < 0 || count_1 < 0){
            cout << "1\n";
        }
        else{
            cout << "0\n";
        }
    }
    else{
        cout << len - i + 1 << "\n";
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}