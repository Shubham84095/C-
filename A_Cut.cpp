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
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> B;
    
    
    for(int i = N - K; i < N; i++) {
        B.push_back(A[i]);
    }
    
   
    for(int i = 0; i < N - K; i++) {
        B.push_back(A[i]);
    }
    
    
    for(int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }
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