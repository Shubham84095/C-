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
    int n;
    cin >> n;

    vector <pair<int, int>> V;
    int l = 0;
    int r = 0;
    vector <int> ans(n);
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        V.push_back({x,y});
        l += x;
        r += y;
        ans[i] = x;
    }

    if(!(l <= 0 && r >= 0)){
        cout << "No\n";
        return;
    }

    ll sum = l;
    for(int i = 0; i < n; i++){
        if(sum == 0){
            break;
        }
        // cout << sum << endl;
        int inc = V[i].second-V[i].first;
        ans[i] += min(inc, -1*sum);
        sum += min(inc, -1*sum);
    }
    cout << "Yes\n";
    print(ans);
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}