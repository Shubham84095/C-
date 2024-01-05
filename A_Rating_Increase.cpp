#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Solution()
{
    string s;
    cin >> s;
    int idx = -1;

    for(int i = 1; i < s.length(); i++){
        if(s[i] != '0'){
            idx = i;
            break;
        }
    }

    if(idx == -1){
        cout << "-1\n";
        return;
    }

    int initialRating = 0;
    int finalRating = 0;

    for(int i = 0; i < idx; i++){
        initialRating = initialRating*10 + (s[i]-'0');
    }
    for(int i = idx; i < s.length(); i++){
        finalRating = finalRating*10 + (s[i]-'0');
    }
    if(finalRating > initialRating){
        cout << initialRating << " " << finalRating << "\n";
    }
    else{
        cout << "-1\n";
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