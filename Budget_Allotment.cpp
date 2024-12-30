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
    int n, x;
    cin >> n >> x;
    vector <int> V(n);
    for(auto& i: V) cin >> i;

    sort(all(V));

    int idx = -1;
    for(int i = 0; i < n; i++){
        if(V[i] >= x){
            idx = i;
            break;
        }
    }

    int i = idx-1, j = n-1;
    while(i >= 0 && j >= idx){
        int rem = x - V[i];
        while(rem > 0 && j >= idx && i >= 0){
            int trem = V[j]-x;
            V[j] -= min(trem, rem);
            V[i] += min(trem, rem);
            rem -= min(trem, rem);
            if(V[i] == x) i--;
            if(V[j] == x) j--;
        }
        if(j < idx || V[j] < x) break;
    }
    // print(V);
    // cout << endl;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cnt += (V[i] >= x);
    }
    cout << cnt << endl;
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