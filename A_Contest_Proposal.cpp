#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector <ll> V(n), T(n);

    for(int i = 0; i < n;  i++){
        cin >> V[i];
    }
    for(int i = 0; i < n;  i++){
        cin >> T[i];
        if(T[i] < V[i]) cnt++;
    }

    int steps = 0;
    while(cnt >= 1){
        cnt = 0;
        V.pop_back();
        V.push_back(-1);
        sort(V.begin(), V.end());
        for(int i = 0; i < n;  i++){
            if(T[i] < V[i]) cnt++;
        }
        steps++;
    }

    cout << steps << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}