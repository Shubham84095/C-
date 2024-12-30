#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    
    int x = 0;
    int cnt = 1;
    while(abs(x) <= n){
        int step = abs(2*(abs(cnt))-1);
        if(cnt%2 == 0) x -= step;
        else x += step;
        cnt++;
    }
    if(cnt&1){
        cout << "Kosuke\n";
    }
    else cout << "Sakurako\n";
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