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
    ll n, m;
    cin >> n >> m;

    vector <ll> V(n);
    for(auto& i: V) cin >> i;

    sort(all(V));

    int i = 0, j = 0;
    ll sum = 0, ans = 0;

    while (j < n) {
        sum += V[j];
        
        while (i <= j && (V[j] - V[i] > 1 || sum > m)) {
            sum -= V[i];
            i++;
        }

        if (sum <= m) {
            ans = max(ans, sum);
        }
        j++;
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