#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

int countElementsGreaterThan(set<ll>& mySet, ll target) {
    auto it = mySet.upper_bound(target);
    int count = std::distance(it, mySet.end());
    return count;
}

void Solution()
{
    int n;
    cin >> n;

    map <ll, ll> V;
    ll x, y, greetings = 0;
    set <ll> S;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        V[x] = y;
        S.insert(y);
    }

    for(auto itr = V.begin(); itr != V.end(); itr++){
        int count = S.size() - countElementsGreaterThan(S, itr->second) - 1;
        // cout << "count : " << countElementsGreaterThan(S, itr->second) << "\n";
        greetings += count;
        auto it = S.find(itr->second);
        S.erase(it);
    }

    cout << greetings << "\n";
    
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