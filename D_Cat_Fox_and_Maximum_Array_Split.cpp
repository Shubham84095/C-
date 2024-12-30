#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n, k, inp;
    cin >> n >> k;
    int maxi;

    for(int i = n; i >= 1; i--){
        cout << "? 1 " << i*n << endl; 
        cout << flush;
        cin >> inp;

        if(inp == n){
            maxi = i;
            break;
        }
    }

    int ans = -1;
    
    for(int i = n/k; i >= 1; i--){
        int temp = (i)*maxi;
        int cnt = 0;
        int idx = 1;
        bool flag = false;

        while(idx <= n){
            cout << "? " << idx << " " << temp << endl;
            cout << flush;
            cin >> idx;
            idx++;
            cnt++;
            if(cnt == k){
                break;
            }
        }

        if(cnt == k && idx == n+1){
            ans = temp;
            break;
        }
    }

    cout << "! " << ans << endl;
    cout << flush;
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
        ll x;
        cin >> x;
        if(x == -1) break;
    }

    return 0;
}