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

    int A[101][101];

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> A[i][j];
            if (i != j) {
                A[j][i] = A[i][j]; 
            }
        }
    }

  
    int ele = 1;

    for (int i = 1; i <= N; ++i) {
        ele = A[ele][i];
    }

    cout << ele << endl;
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