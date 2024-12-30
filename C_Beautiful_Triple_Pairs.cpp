#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
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
    vector <int> V(n);

    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    vector< map< pair<int,int>, vector<int>>> S(3);
    for(int i = 0; i < n-2; i++){
        S[0][{V[i], V[i+1]}].push_back(V[i+2]);
        S[1][{V[i+1], V[i+2]}].push_back(V[i]);
        S[2][{V[i], V[i+2]}].push_back(V[i+1]);
    }

    ll ans = 0;

    for(int i = 0; i < 3; i++){
        ll tt = 0;
        for(auto &k : S[i]){
            vector <int> v = k.second;
            int len = v.size();
            sort(all(v));

            map<int,int> cnt;
            for(int j : v) cnt[j]++;

            for(int j : v){
                tt += (len - cnt[j]);
            }
        }

        ans += (tt/2);
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