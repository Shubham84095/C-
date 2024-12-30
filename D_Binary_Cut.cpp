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

void Solution()
{
   string s;
   cin >> s;

   int cnt = 1;
   bool flag = false;

   for(int i = 0; i < s.length()-1; i++){
    
    if(!flag){
        if(s[i] == '1' && s[i+1] == '0'){
            cnt++;
        }
        if(s[i] == '0' && s[i+1] == '1'){
            flag = true;
        } 
    }
    else{
        if(s[i] == '0' && s[i+1] == '1'){
            cnt++;
        }
        else if(s[i] == '1' && s[i+1] == '0'){
            cnt++;
        }
    }
   } 

   cout << cnt << endl;
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