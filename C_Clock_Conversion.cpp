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
    char A[5];
    for(int i = 0; i < 5; i++){
        cin >> A[i];
    }

    int len = 5;

    int num = (A[0] - '0')*10 + (A[1] - '0');
    if(num > 12 && num < 22){
        A[0] = '0';
        A[1] = '0' + num%12;
    }
    if(num == 22){
        A[0] = '1';
        A[1] = '0';
    }
    if (num == 23){
        A[1] = '1';
        A[0] = '1';
    }
    if(num == 0){
        A[0] = '1';
        A[1] = '2';
    }

    for(int i = 0; i < 5; i++){
        cout << A[i];
    }
    cout << " ";
    (num >= 12)? cout << "PM\n":cout << "AM\n";

}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int tests = 1;
    cin >> tests;
 
    rep(i, 1, tests) runCase(i);
 
    return 0;
}