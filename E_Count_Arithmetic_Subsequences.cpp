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
// #define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

const int MOD = 998244353;

map<int, map<int, map<int, int>>> mp;

int solve(vector<int>& A, int i, int len, int d, int k) {
    if (len == k) return 1;
    if (mp[i].count(len) && mp[i][len].count(d)) return mp[i][len][d];

    int res = 0;
    for (int j = i + 1; j < A.size(); ++j) {
        if (len == 1 || A[j] - A[i] == d) {
            res = (res + solve(A, j, len + 1, A[j] - A[i], k)) % MOD;
        }
    }
    
    return mp[i][len][d] = res;
}

int help(vector<int>& A, int N, int k) {
    int num = 0;
    for (int i = 0; i < N; ++i) {
        num = (num + solve(A, i, 1, 0, k)) % MOD;
    }
    return num;
}

void Solution() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    for (int k = 1; k <= N; ++k) {
        mp.clear();
        cout << help(A, N, k) << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}