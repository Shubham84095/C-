#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n"
#define bob() cout <<"Bob\n"
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;

bool isPalindrome(string& str, int start, int k) {
    int end = start + k - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool solve(string& S, int k) {
    int n = S.length();
    for (int i = 0; i <= n - k; i++) {
        if (isPalindrome(S, i, k)) {
            return true;
        }
    }
    return false;
}

void Solution() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    sort(all(S));
    int cnt = 0;
    do{
        if (!solve(S, K)) {
            cnt++;
        }
    }while (next_permutation(all(S)));

    cout << cnt << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) {
        Solution();
    }

    return 0;
}
