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
#define Vll(n,m) vector<vector<int,int>> V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
   ll n,k,pb,ps;
   cin >> n >> k >> pb >> ps;

    vector<ll> V(n), S(n);
    for (int i = 0; i < n; i++){
        cin >> V[i];
        V[i] = V[i]-1;
    }
    for (int i = 0; i < n; i++){
        cin >> S[i];
    }
    pb--;
    ps--;

   ll bodCnt = 0,bodTemp = 0;
   ll sasCnt = 0, sasTemp = 0;

   for(int i = 0; i < min(n,k); i++){
        sasCnt = max(sasCnt , sasTemp + (k-i)*S[ps]);
        bodCnt = max(bodCnt , bodTemp + (k-i)*S[pb]);
        sasTemp += S[ps];
        bodTemp += S[pb];
        ps = V[ps];
        pb = V[pb];
   }

   if (bodCnt == sasCnt)
    {
        cout << "Draw\n";
    }
    else if (bodCnt > sasCnt)
    {
        cout << "Bodya\n";
    }
    else
    {
        cout << "Sasha\n";
    }
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