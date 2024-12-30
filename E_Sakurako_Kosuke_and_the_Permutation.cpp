#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;

int minSwaps(vector<int>& A, vector<int>& B) {
    int n = A.size();
    vector<int> index(n + 1);

    for (int i = 0; i < n; ++i) {
        index[B[i]] = i; 
    }

    vector<bool> visited(n, false);
    int swaps = 0;

    for (int i = 0; i < n; ++i) {
        if (visited[i] || A[i] == B[i]) {
            continue;
        }

        int cycleSize = 0;
        int j = i;

        while (!visited[j]) {
            visited[j] = true;
            j = index[A[j]]; 
            cycleSize++;
        }

        if (cycleSize > 0) {
            swaps += (cycleSize - 1);
        }
    }

    return swaps/2; 
}

void Solution()
{
    int n;
    cin >> n;
    vector <int> A(n);
    for(auto& e: A) cin >> e;

    vector <int> B(n), C(n);
    for(int i = 0; i < n; i++){
        B[i] = i + 1;
        C[A[i] - 1] = i + 1;
    }

    cout << min(minSwaps(A, B), minSwaps(A, C)) << endl;
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
