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
   int n; cin >> n;

   vector <int> A(n),B(n);
   for(auto& i:A) cin >> i; 
   for(auto& i:B) cin >> i; 

   int a = 0, b = 0;
   for(int i = 0; i < n; i++){
    if(!(A[i] == B[i])){
        if(A[i] > B[i]) a += A[i];
        else if(B[i] > A[i]) b += B[i];
    }
   }

   for(int i = 0; i < n; i++){
    if(A[i] == B[i] ){
        if(A[i] == -1){
        if(a >= b) a--;
        else b--;
        }
        else if(A[i] == 1){
            if(a >= b) b++;
            else a++;
        }
    }
   }

   cout << min(a, b) << endl;
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