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
    int n, q;
    cin >> n >> q;

    string A, B;
    cin >> A >> B;

    vector <vector <int>> U(26, vector <int> (n+1, 0));
    vector <vector <int>> V(26, vector <int> (n+1, 0));

    for(int i = 0; i < n; i++){
        char a = A[i];
        char b = B[i];
        U[a-'a'][i+1]++, V[b-'a'][i+1]++;
    }

    for(int i = 0; i < 26; i++){
        for(int j = 1; j <= n; j++){
            U[i][j] += U[i][j-1];
            V[i][j] += V[i][j-1];
        }
    }

    while(q--){
        int l, r;
        cin >> l >> r;

        ll cnt = 0;
        for(int i = 0; i < 26; i++){
            int uc = (U[i][r]-U[i][l-1]);
            int vc = (V[i][r]-V[i][l-1]);
            cnt += abs(uc - vc);
        }
        cout << cnt/2 << endl;
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