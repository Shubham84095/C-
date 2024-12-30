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
    string a, b;
    cin >> a >> b;
    int x = a.length();
    int y = b.length();

    int ans = x + y;
    int l = min(x, y);
    bool flag = false;
    for(int i = 0; i < l; i++){
        if(a[i] != b[i]) break;
        else {
            ans--;
            flag = true;
        }
    }
    cout << ans + flag << endl;
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