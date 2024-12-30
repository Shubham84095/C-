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

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Solution()
{
    int n, a, b;
    cin >> n >> a >> b;

    int gc = gcd(a, b);

    vector <int> A(n);
    for(auto& e: A) cin >> e;


    sort(all(A));
    int ans = A[n-1]-A[0];
    if(gc == 1){
        cout << "0\n";
        return;
    }

    for(int i = 0; i < n; i++){
        int diff = abs(A[i]-0);

        int t = diff;
        int ti = (diff/gc);
        A[i] -= ti*gc;
    }
    int maxi = *max_element(all(A));
    int mini = *min_element(all(A));

    ans = min(ans, abs(maxi-mini));
    sort(all(A));
    for(int i = n-1; i >= 1; i--){
        maxi = A[i-1];
        mini = A[i]-gc;
        ans = min(ans, abs(maxi-mini));
    }

    cout << ans << endl;
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