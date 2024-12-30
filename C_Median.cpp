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
    int n, x;
    cin >> n >> x;

    int cntLess = 0;
    int cntSame = 0;
    int cntGrt = 0;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp == x) cntSame++;
        else if(temp > x) cntGrt++;
        else cntLess++;
    }

    int common = abs(cntGrt - cntLess);
    int need = max((common - cntSame), 0LL);
    if((cntLess > cntGrt) && common >= cntSame) need++;
    if(need == 0 && cntSame == 0) need++;
    
    cout << need << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}