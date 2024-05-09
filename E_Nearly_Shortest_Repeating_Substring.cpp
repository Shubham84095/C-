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

bool check1(string &s, int range, int n){
    string subSeq = s.substr(0, range);
    // cout << "subSeq : " << subSeq << endl;
    int cntDiff = 0;
    if(n % range) return false;

    for(int i = 0; i < n; i += range){
        for(int j = 0; (j < range) && (j + i  < n); j++){
            if(s[j+i] != subSeq[j]) cntDiff++;
        }
        if(cntDiff > 1) return false;
    }

    return true;
}

bool check2(string &s, int range, int n){
    string subSeq = s.substr(n -  range, range);
    // cout << "subSeq : " << subSeq << endl;
    int cntDiff = 0;

    if(n % range) return false;
    for(int i = 0; i < n; i += range){
        for(int j = 0; (j < range) && (j + i  < n); j++){
            if(s[j+i] != subSeq[j]) cntDiff++;
        }
        if(cntDiff > 1) return false;
    }

    return true;
}

void Solution()
{
   int n;
   cin >> n;
   string s;
   cin >> s;

   int ans = n;

   for(int i = n; i >= 1; i--){
    if(n % i == 0){
        bool flag1 = check1(s, i, n);
        bool flag2 = check2(s, i, n);

        if(flag1 || flag2) ans = i;
    }
   }

   cout  << ans << endl;

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