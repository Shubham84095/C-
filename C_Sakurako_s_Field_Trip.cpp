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

void Solution()
{
    int n;
    cin >> n;
    vector <int> A(n);
    for(auto& e: A) cin >> e;

    int ans = 0;
    for(int i = 0; i < n-1; i++){
        if(A[i] == A[i+1]) ans++;
    }

    int i = 0, j = n-1;

    while(i < j){
        if(A[i] != A[j+1] && A[j] != A[i-1]){
            swap(A[i], A[j]);
        }
        i++;
        j--;
    }

    // if(n > 2 && (A[0] != A[n-2] || A[1] != A[n-1])) swap(A[0], A[n-1]);
    // print(A);cout << endl;
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        if(A[i] == A[i+1]) cnt++;
    }
    cout << min(ans, cnt) << endl;
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