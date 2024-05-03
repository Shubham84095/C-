#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cntU = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'U') cntU++;
    }

    if(cntU & 1) yes();
    else no();
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}