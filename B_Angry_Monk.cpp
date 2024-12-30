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
    vector <int> V(k);
    for(auto& i: V) cin >> i;

    sort(all(V));
    int ans = 0;
    int j;
    for(j = 0; j < k-1; j++){
        if(V[j] == 1)
        ans++;
        else break;
    }

    // cout << j << endl;

    for(int i = j; i < k-1; i++){
        ans += (2*(V[i]-1) + 1);
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