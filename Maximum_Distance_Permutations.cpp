#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n"
#define bob() cout <<"Bob\n"
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

    vector <int> A(n), B(n);
    iota(all(A), 1);
    if(n % 2 == 0){
        int z = n/2;
        int idx = n/2-1;
        B[idx] = n;
        for(int i = idx+1; i < n; i++){
            B[i] = A[i]-z;
        }
        for(int i = 0; i < idx; i++){
            B[i] = A[i]+z;
        }
    }
    else{
        int z = n/2;
        int idx = n/2;
        B[idx] = n;
        for(int i = idx+1; i < n; i++){
            B[i] = A[i]-z;
        }
        for(int i = 0; i < idx; i++){
            B[i] = A[i]+z;
        }
        B[n-1] = 1;
    }

    print(A);
    cout << endl;
    print(B);
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