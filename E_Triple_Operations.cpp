#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;

vector<int> A(2e5 + 1, 0);

void Solution()
{
    int l, r;
    cin >> l >> r;
    // cout << l << " "<<  r << endl;
    ll a = A[l] - A[l - 1];
    ll ans = 2 * a + A[r] - A[l];
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    bool flag = true;
    int t = 1;
    cin >> t;
    while(t--) 
    {
        if(flag){
            int p = 1;
            ll po = 3;
            for(int i = 1; i <= 2e5; i++){
                if(i < po) {
                    A[i] = p;
                } else {
                    po *= 3;
                    p++;
                    A[i] = p;
                }
            }

            for(int i = 1; i <= 2e5; i++){
                A[i] = (A[i - 1]+A[i]);
            }
            flag = false;
        }
        Solution();
    }

    return 0;
}
