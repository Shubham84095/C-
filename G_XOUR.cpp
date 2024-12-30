#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

void Solution()
{
    int n;
    cin >> n;

    vector <int> V(n);
    map<int, priority_queue<int>> mp;

    for(int i = 0; i < n; i++){
        cin >> V[i];
        mp[(V[i]>>2)].push(-V[i]); 
    }

    for(int i = 0; i < n; i++){
        cout << -mp[(V[i]>>2)].top() << " ";
        mp[(V[i]>>2)].pop();
    }
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