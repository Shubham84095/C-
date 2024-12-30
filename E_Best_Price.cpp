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


bool check(vector <int>& A, vector <int>& B, int lim, int k, ll& ans, ll kt){
    int n = A.size();
    ll profit = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(lim <= A[i]) sum += A[i], profit += lim;
        else if(lim <= B[i]) {
            sum += B[i];
            profit += lim;
            k--;
        }
    }

    // cout << lim << endl;
    if(k <= kt) ans = max(ans, profit);
    return (k >= 0);
}

void Solution()
{
    ll n, k;
    cin >> n >> k;
    vector <ll> A(n),B(n);
    for(auto& e: A) cin >> e;
    for(auto& e: B) cin >> e;

    ll l = *min_element(all(A));
    ll r = *max_element(all(B));

    ll apt = 0;
    ll price = l;
    while(l <= r){
        ll mid = l + (r-l)/2;
        if(check(A, B, mid, k, apt)){
            price = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }

    
    cout << apt << endl;
    // ll ans = 0;
    // for(int i = 0; i < n; i++){
    //     // if(price <= A[i]) ans += abs(price-A[i]);
    //     // else if(price <= B[i]) ans += abs(price-B[i]);

    //     if(price <= B[i]) ans += apt;
    // }
    // cout << ans << endl;
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