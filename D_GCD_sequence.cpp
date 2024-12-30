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

int pivotIdx(vector <int>& GC, int n){
    int idx = -1;
    for(int i = 0; i < n-1; i++) {
        if(GC[i] > GC[i+1]) return i;
    }
    return idx;
}

bool solve(vector <int> V, int n, int idx){
    V.erase(V.begin()+idx);
    vector <int> GC;
    for(int i = 1; i < V.size(); i++){
        GC.push_back(__gcd(V[i], V[i-1]));
    }

    for(int i = 0; i < GC.size()-1; i++){
        if(GC[i] > GC[i+1]) return false;
    }
    return true;
}

void Solution()
{
    int n;
    cin >> n;
    vector <int> V(n);
    vector <int> GC;
    cin >> V[0];
    for(int i = 1; i < n; i++) {
        cin >> V[i];
        GC.push_back(__gcd(V[i], V[i-1]));
    }

    int idx = pivotIdx(GC, GC.size());

    if(idx == -1) {
        yes();
    }
    else {
        int newIdx = idx;
        bool ans = false;
        if(idx < n){
            ans = (ans| solve(V, n, idx));
        }
        if(idx+1 < n){
            ans = (ans| solve(V, n, idx+1));
        }
        if(idx + 2 < n){
            ans = (ans| solve(V, n, idx+2));
        }

        if(ans){
            yes();
        }
        else{
            no();
        }
    }
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