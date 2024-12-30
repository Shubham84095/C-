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
    int l,r,L,R;
    cin >> l >> r >> L >> R;

    if(l > R || L > r){
        cout << "1\n";
    }
    else if((l >= L && r <= R) || (L >= l && R <= r)){
        int ans = min(R-L, r-l);
        if(min(l,L) < max(L, l)) ans++;
        if(min(r,R) < max(r, R)) ans++;
        cout << ans << endl;
    }
    else{
        int A[4] = {l,L,R,r};
        sort(A,A+4);
        cout << A[2]-A[1] + 2 << endl;
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