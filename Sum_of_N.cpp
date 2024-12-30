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

vector<bool> isPrime(1e6 + 1, true);

void populate(){
    isPrime[0] = isPrime[1] = false;
    
    for (int p = 2; p * p <= 1e6; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= 1e6; i += p) {
                isPrime[i] = false;
            }
        }
    }
}

map <int, ll> V;

void Solution()
{
    int n;
    cin >> n;

    int maxi = 1;
    ll sum = 0;

    if(V[n] != 0){
        cout << V[n] << endl;
        return;
    }

    for(int i = 1; i < n; i++){
        if(n % i == 0) maxi = i;
    }

    for(int i = 2; i <= n; i++){
        if(maxi*i <= n){
            if(isPrime[i]){
                sum += (long long)i*n;
            }
        }
    }

    V[n] = sum;
    cout << sum << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    populate();
    int t = 1;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}