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

bool isSorted(vector<int>& vec) {
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

void Solution()
{
    int n;
    cin >> n;
    vector <int> V(n);
    for(int i = 0; i < n; i++) cin >> V[i];

    bool Sorted = true;
    for(int i = 1; i < n; i++){
        if(V[i] < V[i-1]) Sorted = false;
    }

    if(Sorted){
        yes();
        return;
    }

    bool flag = false;
    for(int i = 0; i < n; i++){
        vector <int> a;
        vector <int> b;
        for(int j = 0; j <= i; j++){
            a.push_back(V[j]);
        }
        for(int j = i+1; j < n; j++){
            b.push_back(V[j]);
        }

        b.insert(b.end(), a.begin(), a.end());
        if(isSorted(b)){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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