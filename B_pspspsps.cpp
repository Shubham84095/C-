#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    bool flag1 = false;
    bool flag2 = false;

    for(int i = 0; i < n; i++){
        if(s[i] == 's' && i > 0) flag2 = true;
        if(s[i] == 'p' && i < n-1) flag1 = true;
    }
    
    if(flag1 && flag2) no();
    else yes();
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}