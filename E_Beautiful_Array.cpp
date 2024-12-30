#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n"
#define bob() cout <<"Bob\n"
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n, k;
    cin >> n >> k;
    vector <ll> V(n);

    for(auto&  i:V) cin >> i;
    sort(all(V));

    map <int, vector <int>> mp;
    for(int i = 0; i < n; i++) mp[V[i]%k].push_back(V[i]);

    ll ans = 0;
    ll cnt = 0;

    for(auto &e: mp){
    int rem = e.first;
    auto ele = e.second;
    int len = ele.size();
    if(len % 2 == 0){
        for(int i = 0; i < len; i += 2){
            ans += (abs(ele[i] - ele[i + 1]) / k);
            cnt++;
        }
    }
    else{
        if (len == 1) continue;

            vector <int> pre(len, 0), suf(len, 0);
            pre[1] = ele[1] - ele[0];
            for (int i = 3; i < len; i += 2) pre[i] = ele[i] - ele[i - 1] + pre[i - 2];
            suf[len - 2] = ele[len - 1] - ele[len - 2];
            for (int i = len - 4; i >= 0; i -= 2) suf[i] = ele[i + 1] - ele[i] + suf[i + 2];

            ll sum = INT64_MAX;
            for (int i = 0; i < len; i += 2) {
                ll temp = 0;
                if (i - 1 >= 0) temp += pre[i - 1];
                if (i + 1 < len) temp += suf[i + 1];
                sum = min(temp, sum);
            }
            ans += (sum / k);
            cnt += len / 2;
        }
    }

    if(cnt == n/2) cout << ans << endl;
    else cout << "-1\n";

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