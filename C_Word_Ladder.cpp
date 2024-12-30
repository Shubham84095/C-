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
    string S, T;
    cin >> S >> T;
    
    int n = S.length();
    int M = 0;
    vector<string> X;
    
    for(int i = 0; i < n; i++){
        if(S[i] != T[i] && S[i] > T[i]){
            S[i] = T[i];
            M++;
            X.push_back(S);
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(S[i] != T[i]){
            S[i] = T[i];
            M++;
            X.push_back(S);
        }
    }
    cout << M << endl;  

    for (int i = 0; i < M; ++i) {
        cout << X[i] << endl;
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