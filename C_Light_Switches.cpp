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
    ll n, k;
    cin >> n >> k;
    vector <int> V(n);
    for(auto& e: V) cin >> e;
    sort(all(V));
    int l = V[n-1], r = V[n-1]+k-1;
    for(int i = n-2; i >= 0; i--){
        int times = (l-V[i])/k;
        ll lt = V[i] + times*(k);
        if(times%2 == 1){
            lt = lt+k;
        }
        ll rt = lt+k-1;
        // cout << "lt -> " << lt << " rt -> " << rt  << " times -> " << times << endl;
        if((lt < l && rt < l) || (lt > r && rt > r)){
            cout << "-1\n";
            return;
        }
        l = max(l, lt);
        r = min(r, rt);
    }
    cout << l << endl;
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