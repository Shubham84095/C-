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
    int a, b;
    cin >> a >> b;

    int sum = a + 2*b;

    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++){
            if(i+2*j == (a-i) + 2*(b-j)){
                yes();
                return;
            }
        }
    }
    no();
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