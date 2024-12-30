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
    int n;
    cin >> n;
    vector <int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(all(A));
    
    int lt = 1, rt = n / 2;
    int l = 0, r = n / 2 - 1;

    ll range = (A[n/2-1] - A[0]) * (A[n - 1] - A[n / 2]);

    while(rt < n - 1) {
        ll tRange = (A[n - 1] - A[0]) * (A[rt] - A[lt]);
        if(tRange < range) {
            range = tRange;
            l = lt;
            r = rt;
        }
        lt++;
        rt++;
    }

    vector<int> ans(n);
    int x = 0, y = 1;

    for(int i = 0; i < l; i++) ans[x] = A[i], x += 2;
    for(int i = l; i <= r; i++) ans[y] = A[i], y += 2;
    for(int i = r + 1; i < n; i++) ans[x] = A[i], x += 2;

    print(ans);
    cout << endl;
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