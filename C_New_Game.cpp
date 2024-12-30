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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    map <int, int> mp;
    vector <pair<int, int>> V;
    V.push_back({0, 0});
    for(auto& e: a) mp[e]++;
    for(auto& e: mp) V.push_back({e.first, e.second});

    int m = V.size();
    for(int i = 1; i < m; i++){
        V[i].second += V[i-1].second;
    }
    // cout << " m - > " << m << endl;
    int i = 1, j = 1;
    ll ans = 0;

    for(auto& e: V){
        // cout << e.first << "->" << e.second << endl;
    }

    while(i <= j && j < m){
        while (j < m && V[j].first - V[i].first == j - i) {
            if (j - i + 1 <= k) {
                ll temp = V[j].second - V[i].second + mp[V[i].first]; 
                ans = max(ans, temp);
                // cout << temp << endl;
            }
            else{
                break;
            }
            j++;
        }
        i++;  
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