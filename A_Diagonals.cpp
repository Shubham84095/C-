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
    int n, k;
    cin >> n >> k;

    if(k == 0){
        cout << "0\n";
        return;
    }

    int nt = n, ans = 0;
    k -= nt;
    int z = n-1;
    ans++;
    int cnt = 0;
    while(k > 0 && z > 0){
        k -= z;
        cnt++;
        if(cnt % 2 == 0) z--; 
        ans++;
    }
    cout << ans << endl;
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