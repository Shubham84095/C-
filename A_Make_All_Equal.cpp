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
    // vector <int> V(n);
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }

    int maxi = 0;
    for(auto& e: mp){
        maxi = max(maxi, e.second);
    }
    cout << n - maxi << endl;
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