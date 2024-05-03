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
    int x,y;
    cin >> x >> y;

    if(x*y > 0){
        if(x+y < 0){
            cout << (x+y) << " 0 0 " << (y+x) << endl;
        }
        else{
            cout << "0 " << (y+x) << " " << (x+y) << " 0" << endl;
        }
    }
    else{
        if(x-y < 0){
            cout << (x-y) << " 0 0 " << (y-x) << endl;
        }
        else{
            cout << "0 " << (y-x) << " " << (x-y) << " 0" << endl;
        }
    }
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