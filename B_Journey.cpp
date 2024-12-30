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
    int n,a,b,c;
    cin >> n >> a >> b >> c;

    int sum = a+b+c;

    ll ans = 0;
    ans += (n/sum)*3;

    n = n % sum;

    int A[3] = {a, b, c};

    for(int i = 0; i < 3; i++){
        if(n <= 0) break;
        else {
            ans++;
            n -= A[i];
        }
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