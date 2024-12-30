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

    vector <int> V(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    if(n == 2){
        cout << min(V[0], V[1]) << endl;
        return;
    }
    
    int ans = 0;

    for(int i = 0; i < n-2; i++){
        int A[3];
        A[0] = V[i];
        A[1] = V[i+1];
        A[2] = V[i+2];
        sort(A, A+3);
        ans = max(ans, A[1]);
    }

    cout << ans << endl;
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