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

const int MAX_VAL = 100000;
vector<int> grundy(MAX_VAL + 1, 0);


void compute_grundy() {
    for (int i = 2; i <= MAX_VAL; ++i) {
        set<int> next_grundy;
        for (int j = 1; j * j <= i; ++j) {
            if (i % j == 0) {
                if (j != i) next_grundy.insert(grundy[j]);
                if (i / j != i && i / j != j) next_grundy.insert(grundy[i / j]);
            }
        }
        int g = 0;
        while (next_grundy.find(g) != next_grundy.end()) {
            ++g;
        }
        grundy[i] = g;
    }
}

void Solution() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int xSum = 0;
    for (int i = 0; i < N; i++) {
        xSum ^= grundy[A[i]];
    }

    if (xSum == 0) {
        cout << "Bruno\n";
    } else {
        cout << "Anna\n";
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    compute_grundy();
    while(t--) 
    {
        Solution();
    }

    return 0;
}