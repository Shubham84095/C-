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
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    ll cnt = 0;
    int len = 1;  
    
    for (int i = 1; i < N; ++i) {
        if (A[i] - A[i-1] == A[i-1] - A[i-2]) {
            len++;  
        } else {
            len = 2;  
        }
        cnt += len - 1;  
    }
    
    cnt += N;  
    
    cout << cnt << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}