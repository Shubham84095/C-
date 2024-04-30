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

int calaculate(int x, int n, int r, int direction)
{
    if (direction == 1)
    {
        int ans = x + r;
        if (ans > n)
            return (ans - n);
        else
            return ans;
    }
    if (direction == 0)
    {
        int ans = x - r;
        if (ans <= 0)
            return (ans + n);
        else
            return ans;
    }
}

void runCase(int &testCase)
{
    // cout << "#Case " << testCase << ": ";

    int n, m, x;
    cin >> n >> m >> x;

    vector<pair<int, char>> V(m);
    for (int i = 0; i < m; i++)
    {
        cin >> V[i].first >> V[i].second;
    }

    set <int> A,B;
    A.insert(x);

    for(int i = 0; i < m; i++){
        if(i%2 == 0){
            for(auto itr = A.begin(); itr != A.end(); itr++){
                int current = *itr;
                if(V[i].second == '1' || V[i].second == '?'){
                    int next = (current - V[i].first + n)%n;
                    next = (next == 0)? n: next;
                    B.insert(next);
                }
                if(V[i].second == '0' || V[i].second == '?'){
                    int next = (current + V[i].first)%n;
                    next = (next == 0)? n: next;
                    B.insert(next);
                }
            }
            A.clear();
        }
        else{
            for(auto itr = B.begin(); itr != B.end(); itr++){
                int current = *itr;
                if(V[i].second == '1' || V[i].second == '?'){
                    int next = (current - V[i].first + n)%n;
                    next = (next == 0)? n: next;
                    A.insert(next);
                }
                if(V[i].second == '0' || V[i].second == '?'){
                    int next = (current + V[i].first)%n;
                    next = (next == 0)? n: next;
                    A.insert(next);
                }
            }
            B.clear();
        }
    }

    if(A.empty()){
        cout  << B.size() << '\n';
        for(auto itr = B.begin(); itr != B.end(); itr++){
            cout << *itr << ' ';
        }
        cout << '\n';
    }
    else{
        cout  << A.size() << '\n';
        for(auto itr = A.begin(); itr != A.end(); itr++){
            cout << *itr << ' ';
        }
        cout << '\n';
    }
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