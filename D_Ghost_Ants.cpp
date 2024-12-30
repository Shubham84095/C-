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
    int n, t;
    cin >> n >> t;
    vector <pair<char, int>> V(n);
    for(int i = 0; i < n; i++) cin >> V[i].first;
    for(int i = 0; i < n; i++) cin >> V[i].second;

    sort(all(V));
    vector <int> S(n);
    for(int i = 0; i < n; i++){
        S[i] = V[i].second;
    }
    int idx = 0;
    while(V[idx].first != '1'){
        idx++;
    }

    // for(int i = 0; i < n; i++){
    //     cout << V[i].first << " " << V[i].second << endl;
    // }

    // cout << *(S.begin()+idx) << endl;

    ll ans = 0;
    for(int i = 0; i < n && V[i].first == '0'; i++){
        int pf = V[i].second - 2*t;
        int pi = V[i].second;
        int num1 = lower_bound(S.begin()+idx, S.end(), pf) - (S.begin() + idx);
        int num2 = upper_bound(S.begin()+idx, S.end(), pi) - (S.begin() + idx);
        int num = (num2-num1);
        // cout << num1 << " " << num2 << " " << num << endl;
        ans += num;
    }

    cout << ans << endl;

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