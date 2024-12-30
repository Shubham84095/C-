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
    int N;
    cin >> N;

    int ans = 0;
    int l = -1, r = -1;
    vector <pair<int, char>> V(N);
    for(auto& e: V){
        cin >> e.first >> e.second;
        if(l != -1 && e.second == 'L'){
            ans += abs(l-e.first);
            l = e.first;
        }
        else if(l == -1 && e.second == 'L'){
            l = e.first;
        }
        if(r != -1 && e.second == 'R'){
            ans += abs(r-e.first);
            r = e.first;
        }
        else if(r == -1 && e.second == 'R'){
            r = e.first;
        }
    }

    cout << ans << endl;
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