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
    int n, s, m;
    cin >> n >> s >> m;
    vector <pair<int, int>> V(n);
    for(auto& e: V) cin >> e.first >> e.second;
    sort(all(V));
    int st = 0;
    for(auto& e: V){
        if((e.first-st) >= s){
            cout << "YES\n";
            return;
        }
        st = e.second;
    }
    if(m-st >= s){
        cout << "YES\n";
            return;
    }
    no();
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