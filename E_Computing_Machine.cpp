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

int solve(string& a, string& b){
    int len = a.length();
    for(int i = 0; i < len-2; i++)
        if(a[i] == '0' && a[i+2] == '0') b[i+1] = '1';
    
    for(int i = 0; i < len-2; i++)
        if(b[i] == '1' && b[i+2] == '1') a[i+1] = '1';
    
    int cnt = 0;
    for(int i = 0; i < len; i++) if(a[i] == '1') cnt++;
    return cnt;
}

void Solution()
{
    int n, q;
    string s, t, a, b;
    cin >> n >> s >> t >> q;
    
    a = s, b = t;
    int len = n;
    for(int i = 0; i < len-2; i++)
        if(a[i] == '0' && a[i+2] == '0') b[i+1] = '1';
    
    for(int i = 0; i < len-2; i++)
        if(b[i] == '1' && b[i+2] == '1') a[i+1] = '1';

    vector <int> pfxa(n);
    for(int i = 0; i < n; i++){
        pfxa[i] = (a[i] == '1');
        if(i) pfxa[i] += pfxa[i-1];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        if(r-l+1 < 5){
            string sa = s.substr(l-1, r-l+1);
            string sb = t.substr(l-1, r-l+1);
            cout << solve(sa, sb) << endl;
        }
        else{
            l--,r--;
            int ans = pfxa[r-2]-pfxa[l+1];
            if(s[l] == '1') ans++;
            if(s[l+1] == '1' || (t[l] == '1' && b[l+2] == '1')) ans++;
            if(s[r] == '1') ans++;
            if(s[r-1] == '1' || (t[r] == '1' && b[r-2] == '1')) ans++;

            cout << ans << endl;
        }
    }
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