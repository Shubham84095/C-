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
    int n, l, r;
    cin >> n >> l >> r;

    vector <int> V(n);
    for(auto& i: V) cin >> i;

    int i = 0, j = 0;
    int ans = 0;
    ll sum = 0;
    while(j < n){
        sum += V[j];
        j++;

        while(sum > r && i < j){
            sum -= V[i];
            i++;
        }

        if(sum >= l && sum <= r){
            ans++;
            sum = 0;
            i = j;
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