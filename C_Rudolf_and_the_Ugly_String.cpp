#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
// Macros
#define ff first
#define ss second
#define pb push_back
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define all(x) x.begin(), x.end()

// Typedef
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    ordered_set; // .find_by_order(), .order_of_key()

// Constants
const int INF = (int)1e9;
const int mod = INF + 7;
/**************************************************************************************/

void runCase(int &testCase)
{
    // cout << "#Case " << testCase << ": ";

    int n;
    cin >> n;

    vector<char> V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    if (n < 3)
    {
        cout << 0 << '\n';
        return;
    }

    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if ((V[i] == 'm' && V[i + 1] == 'a' && V[i + 2] == 'p') || (V[i] == 'p' && V[i + 1] == 'i' && V[i + 2] == 'e'))
        {
            count++;
            i += 2;
        }
        
    }

    cout << count << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests = 1;
    cin >> tests;

    rep(i, 1, tests) runCase(i);

    return 0;
}