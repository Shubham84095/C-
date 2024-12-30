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

const int N = 2e3;
vector <int> A(N);

void preComp(){
    A[0] = 1;
    A[1] = 1;
    A[2] = 2;
    A[3] = 6;

    for(int i = 4; i < N; i++){
        ll sum = 0;
        for(int j = 0; j <= i-2; j++){
            sum += (A[i-2-j]*A[j])%MOD;
        }
        A[i] = (2*A[i-1] + 2*(sum))%MOD;
    }
}

void Solution()
{
    int n;
    cin >> n;
    cout << A[n] << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    preComp();
    while(t--) 
    {
        Solution();
    }

    return 0;
}