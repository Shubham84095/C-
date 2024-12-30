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

bool check(vector <int>& A){
    int rem = A[0]%2;
    for(auto& e: A){
        if(e%2 != rem){
            return false;
        }
    }
    return true;
}

void Solution()
{
    int n;
    cin >> n;
    vector <int> A(n);
    ll a = 1, b = 2;
    for(auto& e: A){
        cin >> e;
        if(e % 2 == 0) b = max(b, e);
        else a = max(a, e);
    }

    if(check(A)){
        cout << "0\n";
        return;
    }

    b = a;

    sort(all(A));
    ll a1 = 0, a2 = 0;

    for(int i = n-1; i >= 0; i--){
        if(A[i] < a && A[i]%2 == 0){
            a1++;
            a = max(A[i]+a, a);
        }
        else if(A[i] > a && A[i] % 2 == 0){
            a1 += 2;
            a = max(A[i]+a, a);
        }
        assert(a%2 != 0);
    }
    a = b;
    for(int i = 0; i < n; i++){
        if(A[i] < a && A[i]%2 == 0){
            a2++;
            a = max(A[i]+a, a);
        }
        else if(A[i] > a && A[i] % 2 == 0){
            a2 += 2;
            a = max(A[i]+a, a);
        }
        assert(a%2 != 0);
    }

    cout << min(a1, a2) << endl;
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