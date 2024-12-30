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
    vector <int> V(n);
    for(auto& i: V) cin >> i;
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        mp[V[i]]++;
    }
    vector <int> freq;
    for(auto& j: mp){
        freq.push_back(j.second);
    }

    sort(all(freq));
    int len = freq.size();
    int ans = freq[len-1];
    int idx = 0;
    int sum = accumulate(all(freq), 0);
    // cout << sum << endl;
    for(int i = len; i >= 1; i--){
        int prod = ceil(1.0*sum)/i;
        // cout << prod << endl;
        if(prod >= 1){
            ans = max(prod*i, ans);
        }
        sum -= freq[idx++];
    }
    cout << max((int)mp.size(), ans) << endl;
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