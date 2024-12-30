#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;

// Brute force solution to find odd divisors
void Solution()
{
    int n, d;
    cin >> n >> d;

    // Compute n!
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
        if (fact > 1e9) {
            fact %= 9; // Reduce modulo 9 to simplify computation
        }
    }
    if (fact == 0) fact = 9; // Handle special case where n! is a multiple of 9

    // Construct the number formed by repeating d exactly n! times
    vector<int> divisors;
    for (int i = 1; i <= 9; i += 2) { // Check only odd digits
        string repeated = string(fact, '0' + d); // Repeat d n! times
        if (!repeated.empty()) {
            int num = 0;
            for (char c : repeated) {
                num = (num * 10 + (c - '0')) % i; // Calculate num modulo i
            }
            if (num == 0) {
                divisors.push_back(i);
            }
        }
    }

    if (divisors.empty()) {
        cout << -1 << endl;
    } else {
        print(divisors);
        cout << endl;
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
