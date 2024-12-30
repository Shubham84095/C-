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
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> A(n), V(k);
    for (auto& i : A) cin >> i;
    for (auto& i : V) cin >> i;

    vector <int> S(n);
    iota(S.begin(), S.end(), 0);

    vector<vector<int>> possible;
    possible.push_back(A);
    
    for (int i = 0, cnt = 0; cnt < min(2000LL, d-1); i++, cnt++) {
        vector<int> temp = possible.back();
        for (int z = 0; z < V[i % k]; z++) {
            if (z < n) { // Ensure z does not exceed the size of A
                temp[z]++;
            }
        }
        possible.push_back(temp);
    }

    int ans = 0;

    for (int i = 0; i < possible.size(); i++) {
        int cnt = 0;
        for (int z = 0; z < n; z++) {
            if (possible[i][z] == z + 1) {
                cnt++;
            }
        }
        ans = max(ans, cnt + (d - i -1) / 2);
    }

    if(A == S && d > 2000) ans++;
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