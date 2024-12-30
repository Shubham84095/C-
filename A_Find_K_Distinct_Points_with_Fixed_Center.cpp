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
    int x, y, k;
    cin >> x >> y >> k;

    if(k&1){
        ll a = 1e8;
        ll b = -1e8;
        for(int i = 0; i < k/2; i++){
            cout << a << " " << a << endl;
            a--;
        }
        for(int i = 0; i < k/2; i++){
            cout << b << " " << b << endl;
            b++;
        }
        cout << x*k << " " << y*k << endl;
    }
    else{
        ll a = 1e8;
        ll b = -1e8;
        for(int i = 0; i < k/2-1; i++){
            cout << a << " " << a << endl;
            a--;
        }
        for(int i = 0; i < k/2-1; i++){
            cout << b << " " << b << endl;
            b++;
        }
        cout << (x*k)/2 + 1 << " " << (y*k)/2+1 << endl;
        cout << (x*k)/2 - 1 << " " << (y*k)/2-1 << endl;
    }
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