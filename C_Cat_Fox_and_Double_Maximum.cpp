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

void Solution()
{
    int n;
    cin >> n;

    int idx = -1;
    vector <int> V(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
        if(V[i] == n) idx = i;
    }

    idx = idx%2;
    set<pair<int, int> > A;
    set<pair<int, int> > B;

    for(int i = 0; i < n; i++){
        if(i%2 == idx) A.insert(make_pair(V[i], i));
        else B.insert(make_pair(V[i], i));
    }

    int end = n;
    int st = n/2;

    while(!A.empty()){
        auto ff = *A.begin();
        int ele = ff.first;
        int id = ff.second;

        V[id] = end--;
        A.erase(A.begin());
    }
    while(!B.empty()){
        auto ff = *B.begin();
        int ele = ff.first;
        int id = ff.second;

        V[id] = st--;
        B.erase(B.begin());
    }
    
    print(V);
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