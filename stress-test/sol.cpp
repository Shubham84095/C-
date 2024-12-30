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

int fun(int n, int d){
    ll num = 0;
    int cnt = 0;

    for(int i = 0; i < 9; i++){
        num = num*10 + d;
        cnt++;
        if(num%n == 0) return cnt;
    }

    return -1;
}

int factorialMod9(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = (result * i);
    }
    return result;
}

void Solution()
{
    int n, d;
    cin >> n >> d;

    n = (n < 9)? factorialMod9(n): factorialMod9(9);
    for(int i = 1; i <= 9; i += 2){
        int time = fun(i ,d);
        if(time != -1 && n % time == 0) cout << i << " ";
    }
    cout << endl;
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