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
    int N;
    cin >> N;

    vector<int> H(N);
    for (int i = 0; i < N; ++i) {
        cin >> H[i];
    }

    ll T = 1;

    for (int& e : H) {
        while(e > 0 && T % 3 != 0){
            e--;
            T++;
        }
        int t = e/5;
        T += t*3;
        e -= t*5;

        

        if(e == 4) T += 2;
        else if(e > 0) T++;

        // cout << T << endl;
    }
    // print(H); cout << endl;
    cout << T-1 << endl;
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