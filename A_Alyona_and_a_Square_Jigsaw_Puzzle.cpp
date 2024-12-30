#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    vector <int> A(n);
    for(auto&e: A) cin >> e;

    ll lim = 1;
    ll cnt = 1;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        while(A[i] > 0){
            if(lim > A[i]){
                int x = A[i];
                int y = lim;
                A[i] -= y;
                lim -= x;
            }
            else{
                A[i] -= lim;
                lim = 4*cnt + 4;
                cnt += 2;
            }
        }
        
        if(A[i] == 0) ans++;
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