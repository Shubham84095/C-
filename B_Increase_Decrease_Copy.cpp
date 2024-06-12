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
    vector <int> A(n);
    vector <int> B(n+1);

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i <= n; i++){
        cin >> B[i];
    }

    int ans = 0;
    int mini = INT_MAX;
    int l = B[n];
    bool flag = false;

    for(int i = 0; i < n; i++){
        if(l >= min(A[i], B[i]) && l <= max(A[i], B[i])){
            mini = 1;
            flag = true;
        }
    }

    if(!flag){
        for(int i = 0; i < n; i++){
            mini = min(mini, min(abs(A[i]-l), abs(B[i]-l)));
        }
        mini += 1;
    }

    for(int i = 0; i < n; i++){
        ans += abs(A[i]-B[i]);
    }
    cout << ans + mini << endl;
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