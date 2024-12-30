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
    string S, T;
    cin >> S >> T;

    int minLength = min(S.size(), T.size());

    for (int i = 0; i < minLength; i++) {
        if (S[i] != T[i]) {
            cout << i + 1 << endl;
            return ;
        }
    }
    if(S != T) cout << minLength+1 << endl;
    else
    cout << "0\n";
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