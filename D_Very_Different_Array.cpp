#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n , m;
    cin >> n >> m;

    vector <ll> V(n), S(m);
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }
    for(int i = 0; i < m; i++){
        cin >> S[i];
    }
    sort(V.begin(),V.end());
    sort(S.begin(),S.end());
    ll sum = 0;
    int st = 0, end = n-1;
    int begin = 0, back = m-1;
    while(end >= st){
        if(st == end){
            sum += max((abs(V[st++]-S[back--])),(abs(V[end--]-S[begin++])));
        }else{
            sum += ((abs(V[st++]-S[back--]))+(abs(V[end--]-S[begin++])));
        }
    }
    cout << sum << "\n";
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