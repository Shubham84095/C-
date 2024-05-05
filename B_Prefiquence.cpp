#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define f(st,end) for(int i = st; i < end; i++)
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
#define Vll(n,m) vector<vector<int,int>> V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
   int a,b;
   cin >> a >> b;
   string A,B;
   cin >> A >> B;

   int i = 0,j = 0;
    int res = 0;
   while(i < a && j < b){
    if(A[i] == B[j]){
        i++;
        j++;
        res++;
    }
    else{
        j++;
    }
   } 

   cout << res << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // t = 1
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}