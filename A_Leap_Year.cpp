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
    int Y;
    cin >> Y;

    int days;
    if (Y % 4 != 0) {
        days = 365;
    } else if (Y % 100 != 0) {
        days = 366;
    } else if (Y % 400 != 0) {
        days = 365;
    } else {
        days = 366;
    }

    cout << days << endl;
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