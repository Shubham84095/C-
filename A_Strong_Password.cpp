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
    string s;
    cin >> s;

    int n = s.length();

    bool flag = false;
    for(int i = 0; i < n-1 ; i++){
        if(s[i] == s[i+1] && s[i] != 'z'){
            s.insert(s.begin()+i+1, s[i]+1);
            flag = true;
            break;
        }
        else if(s[i] == s[i+1] && s[i] == 'z'){
            s.insert(s.begin()+i+1, 'a');
            flag = true;
            break;
        }
    }

    if(!flag){
        if(s[0] == 'z'){
            s.insert(s.begin(), 'a');
        }
        else s.insert(s.begin(), s[0]+1);
    }

    cout << s << endl;
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