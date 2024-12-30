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
    int x, y, k;
    cin >> x >> y >> k;
    while (k > 0) {
        if(x < y){
            if(y-x <= k){
                k -= (y-x);
                x = 1;
            }


            k = k%(y-1);
            
            // cout << "x -> " << x << endl;
            x += (k);
            // cout << "x -> " << x << endl;
            break;
        }
        else{
            if ((x + 1) % y == 0) {
            x = x + 1;
            k--;
            while (x % y == 0) {
                x = x / y;
            }
            // cout << "x -> " << x << endl;
        } else {
            int z = (x) / y;
            z = z + 1;
            int req = z * y;
            // cout << k << " " << req-x-1 << endl;
            int steps = min(k, req - x - 1);
            k -= steps;
            // cout << "steps -> " << steps << endl;
            x = x + steps;
            // cout << "x -> " << x << endl;
        }
        }
    }

    cout << x << endl;
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