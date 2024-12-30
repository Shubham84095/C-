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
    int cnt = 0;
    int a = 0, b = 0, c= 0, d= 0;
    for(int i = 0; i < 4*n; i++){
        if(s[i] == '?') continue;
        else if(s[i] == 'A' && a < n){
            a++;
            cnt++;
        }
        else if(s[i] == 'B' && b < n){
            b++;
            cnt++;
        }
        else if(s[i] == 'C' && c < n){
            c++;
            cnt++;
        }
        else if(s[i] == 'D' && d < n){
            d++;
            cnt++;
        }
    }
    cout << cnt << endl;
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