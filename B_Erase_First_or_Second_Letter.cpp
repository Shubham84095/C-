#include <bits/stdc++.h>
using namespace std;

bool isEqual(string& s1, string& s2){
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != s2[i]) return false;
    }
    return true;
}

void solve(string s, long long count){
    if(s.length() == 0) {
        return;
    }
    string s1, s2;
    for(int i = 0; i < s.length(); i++){
        s1[i] = s[i];
        s2[i] = s[i];
    }
    cout << "Count is : " << count << "\n";
    s1.erase(s1.begin());
    s2.erase(s2.begin()+1);
    if(isEqual(s1, s2)){
        count++;
        solve(s1, count);
    }
    else{
        count += 2;
        solve(s1, count);
        solve(s2, count);
    }
    cout << count << "\n";
}

void Solution()
{
    int n;
    long long count = 0;
    cin >> n;
    
    string s;
    
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    cout << "REACHING\n";
    solve(s, count);
    cout << "REACHING\n";
    cout << count << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}