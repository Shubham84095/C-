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
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

int solve(int need, int a, int b, int c, bool &flag){
    int currentNeed = 0;
    for(int i = 0; i < need; i++){
        if(a){
            currentNeed += 2;
            a--;
        }
        else if(b){
            currentNeed += 1;
            b--;
        }
        else if(c){
            c--;
        }

        // critical base case
        if(a + b + c == 0){
            if(i + 1 != need || currentNeed != 0){
                flag = false;
                return -1;
            }
        }
    }

    // base case
    if(currentNeed == 0){
        if(a + b + c != 0){
            flag = false;
            return -1;
        }
        else{
            return 0;
        }
    }

    return (1 + solve(currentNeed , a, b, c, flag));
}

void Solution()
{
   int a, b, c;
   cin >> a >> b >> c;
   
   bool flag = true;

   int edges = solve(1, a, b, c, flag);

   if(flag) cout << edges << endl;
   else cout << "-1\n";

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