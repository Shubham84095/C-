#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
//const int N = 1e7 + 10;

const int MAXN = 100005;
vector<int> C(MAXN, 1);

void preprocess() {
    C[0] = 1;
    for(int i = 1; i < MAXN; i++){
        C[i] = (C[i-1]*2)%MOD;
    }
}


void Solution()
{
    int t;
    cin >> t;
    vector<int> n(t), k(t);
    
    for (int i = 0; i < t; i++) {
        cin >> n[i];
    }
    
    for (int i = 0; i < t; i++) {
        cin >> k[i];
    }
    
    preprocess();
    
    for (int i = 0; i < t; i++) {
        if(n[i] == k[i] || k[i] == 0){
            cout << "1\n";
        }
        else if(n[i] < k[i]){
            cout << "0\n";
        }
        else{
            cout << C[k[i]] << endl;
        }
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