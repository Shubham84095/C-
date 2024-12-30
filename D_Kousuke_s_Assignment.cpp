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
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        map<ll, int> mp;
        long long sum = 0;
        int ans = 0;
        mp[0] = 1; 
        
        for (int i = 0; i < n; i++) {
            sum += a[i];
            
            if (mp[sum]) {
                ans++;
                mp.clear();
                mp[0] = 1;
                sum = 0;
            } else {
                mp[sum] = 1;
            }
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