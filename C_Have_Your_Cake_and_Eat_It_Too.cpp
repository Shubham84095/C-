#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e+1 << " ";
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
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void cal(vector <int>& A, vector <int>& B, vector <int>& C, int tot, vector <vector<int>>& V, int n, int aa, int bb, int cc){
    int a = tot, b = tot, c = tot;
    vector<int> ans(6, -1);

    int j = 0;
    ans[aa] = j;
    while (a > 0 && j < n) {
        a -= A[j];
        j++;
    }
    if (j > n) return;
    ans[aa+1] = j-1;
    ans[bb] = (j);

    while (b > 0 && j < n) {
        b -= B[j];
        j++;
    }
    if (j > n) return;
    ans[bb+1] = (j-1);
    ans[cc] = (j);

    while (c > 0 && j < n) {
        c -= C[j];
        j++;
    }
    if (c <= 0)
        ans[cc+1] = (n-1);
    V.push_back(ans);
}

void Solution()
{
    int n;
    cin >> n;
    vector <int> A(n),B(n),C(n);
    ll sum = 0;
    for(auto& i:A) {
        cin >> i;
        sum += i;
    }
    for(auto& i:B) cin >> i;
    for(auto& i:C) cin >> i;

    int tot = ceil((1.0*sum)/3);
    
    vector <vector<int>> V;
    cal(A,B,C,tot, V, n, 0, 2, 4);
    cal(A,C,B,tot, V, n, 0, 4, 2);
    cal(B,A,C,tot, V, n, 2, 0, 4);
    cal(B,C,A,tot, V, n, 2, 4, 0);
    cal(C,B,A,tot, V, n, 4, 2, 0);
    cal(C,A,B,tot, V, n, 4, 0, 2);
    for(auto& j:V){
        bool flag = true;
        for(auto& i:j){
            if(!(i >= 0 && i < n)){
                flag = false;
            }
        }
        if(flag){
            print(j);
            cout << endl;
            return;
        }
    }
    cout << "-1\n";
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