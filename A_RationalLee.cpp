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
    vector <int> V(n), H(k);
    for(auto& i: V) cin >> i;
    for(auto& i: H) cin >> i;

    sort(all(V));
    ll ans = 0;
    for(int i = n-1; i >= (n-k); i--){
        ans += V[i];
    }

    int z = n-1;
    for(int i = 0; i < k; i++){
        if(H[i] == 1){
            ans += V[z];
            z--;
        }
    }

    sort(all(H), greater <int> ());
    int idx = 0;

    for(int i = 0; i < k; i++){
        if(H[i] > 1){
            int len = H[i]-1;
            ans += V[idx];
            idx += len;
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