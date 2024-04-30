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



void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": ";
    int n;
    cin >> n;
    vector <ll> V(n);

    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    for(int i = 0;  i < n-2; i++){
        if(V[i] < 0){
            cout << "NO\n";
            return;
        }
        if(V[i] != 0){
            V[i+1] = V[i+1] - 2*V[i];
            V[i+2] = V[i+2] - V[i];
            V[i] = 0;
        }
    }

    // for(int i = 0; i < n; i++){
    //     cout << V[i] << " ";
    // }
    // cout << '\n';

    for(int i = 0; i < n; i++){
        if(V[i] != 0){
            cout << "NO\n" ;
            return;
        }
    }

    cout << "YES\n";

}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int tests = 1;
    cin >> tests;
 
    rep(i, 1, tests) runCase(i);
 
    return 0;
}