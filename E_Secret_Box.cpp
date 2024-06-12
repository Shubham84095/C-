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
    ll A[3];
    ll k;
    cin >> A[0] >> A[1] >> A[2] >> k;
    sort(A, A+3);

    if(k == 1){
        cout << 1LL*(A[0]*A[1]*A[2]) << endl;
        return;
    }
    ll res = 0;
    for(ll i = 1; i <= A[0]; i++){
        if(k % i == 0){
            ll area = k / i;
            for(ll j = 1; j <= A[1]; j++){
                if(area % j == 0){
                    ll a = j;
                    ll b = area / j;
                    if(max(a, b) <= A[2] && min(a, b) <= A[1]){
                        ll diffa = A[2] - max(a, b) + 1;
                        ll diffb = A[1] - min(a, b) + 1;
                        ll tempRes = diffa * diffb * (A[0] - i + 1);
                        res = max(res, tempRes);
                    }
                }
            }
        }
    }

    cout << res << endl;
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