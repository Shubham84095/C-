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

void getSeq(vector<int>& seq, vector<int>& R, int N, int K, int index) {
    if (index == N) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += seq[i];
        }
        if (sum % K == 0) {
            for (int i = 0; i < N; i++) {
                cout << seq[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    for (int i = 1; i <= R[index]; i++) {
        seq[index] = i;
        getSeq(seq, R, N, K, index + 1);
    }
}

void Solution()
{
    int N, K;
    cin >> N >> K;

    vector<int> R(N);
    for (int i = 0; i < N; i++) {
        cin >> R[i];
    }

    vector<int> seq(N);
    getSeq(seq, R, N, K, 0);
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