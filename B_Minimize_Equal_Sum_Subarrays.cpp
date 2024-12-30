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
    for(auto& e: V) cin >> e;

    map <ll, ll> mp;
    for(int i = 0; i < n; i++){
        mp[V[i]] = i;
    }

    vector <int> A(n);
    for(int i = 1; i <= n; i++){
        if(i == 1){
            A[mp[i]] = n;
        }
        else{
            A[mp[i]] = i-1; 
        }
    }
    print(A);
    cout << endl;
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