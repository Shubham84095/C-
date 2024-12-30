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
    vector <int> V(n);
    for(auto& i:V) cin >> i;

    vector <pair<int,int>> T;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[V[i]]++;
    }
    int cnt = 0;
    int freq = -1;
    for(auto& j: mp){
        if(j.second >= cnt){
            freq = j.first;
            cnt = j.second;
        } 
    }
    int mini = *min_element(all(V));
    for(int i = 0; i < n; i++){
        if(V[i] == mini) continue;
        else{
            int j = i;
            while(j < n && V[j] != mini){
                j++;
            }
            T.push_back({i,j-1});
            i = j-1;
        }
    }

    int ans = n;
    ll temp = 0;
    for(int i = 0; i < T.size(); i++){
        temp += (T[i].second-T[i].first+1)*mini;
    }
    ans = min(temp, ans);
    ans = min(ans, (n-cnt)*(freq));
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