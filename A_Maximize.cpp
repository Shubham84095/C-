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

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void Solution()
{
   int x;
   cin >> x;

   int ans = 0;
   int maxi = 0;

   for(int i = 1;  i < x; i++){
    int temp = gcd(i,x) + i;
    if(temp > maxi){
        ans = i;
        maxi = temp;
    }
   }

   cout << ans << endl;
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