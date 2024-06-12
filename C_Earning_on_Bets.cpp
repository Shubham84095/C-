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

    vector <int> K(n);
    for(int i = 0; i < n; i++){
        cin >> K[i];
    }
    int mini = *min_element(all(K));

    int mu = 1e9-1;
    vector <int> ans(n);
    for(int i = 0; i < n; i++){
        ans[i] = ceil((1.0*mini*mu)/(1.0*K[i]));
    }

    ll sum = 0;
    ll al = accumulate(all(ans),0LL);
    for(int i = 0; i < n; i++){
        if((ll)K[i]*ans[i] <= al){
            cout << "-1\n";
            return;
        }
    }
    print(ans);
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