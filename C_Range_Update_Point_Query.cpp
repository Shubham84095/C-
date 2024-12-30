#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
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

int calc(int num){
    
}

void Solution()
{
    int n, q;
    cin >> n >> q;
    vector <int> V(n);
    for(auto& i: V) cin >> i;

    while(q--){
        int x;
        cin >> x;
        if(x == 1){
            int l, r;
            cin >> l >> r;
            l--,r--;

            for(int i = l; i <= r; i++){
                if(V[i] > 9){
                    int sum = 0;
                    int num = V[i];
                    while(num != 0){
                        sum += (num%10);
                        num /= 10;
                    }
                    V[i] = sum;
                }
            }
        }
        else{
            int idx;
            cin >> idx;
            cout << V[idx-1] << endl;
        }
    }
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