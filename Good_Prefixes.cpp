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
    int ans = 0;
    vector <int> V(n);
    for(auto &e: V) cin >> e;
    vector <int> pfx(n);
    pfx[0] = V[0];
    for(int i = 1; i < n; i++){
        pfx[i] = pfx[i-1]+V[i];
    }

    if(pfx[0] == 0) ans++;
    int maxi = V[0];
    for(int i = 1; i < n; i++){
        // if(V[i] == pfx[i-1]){
        //     ans++;
        // }
        // else if(V[i] == 0){
        //     if(i-1 > 0){
        //         if(V[i-1] == pfx[i-2]){
        //             ans++;
        //         }
        //     }
        // }
        // else if(pfx[i-1]-V[i] == V[i-1]){
        //     ans++;
        // }

        maxi = max(V[i], maxi);
        if(pfx[i]-maxi == maxi) ans++;
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