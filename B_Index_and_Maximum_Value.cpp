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
    int n, m;
    cin >> n >> m;

    vector <int> A(n);
    for(auto& e: A) cin >> e;
    sort(all(A));
    ll maxi = A[n-1];

    while(m--){
        char c;
        int l, r;
        cin >> c >> l >> r;

        if(maxi <= r && maxi >= l){
            if(c == '+'){
                maxi++;
            }
            else{
                maxi--;
            }
        }
        cout << maxi << " ";
    }

    cout << endl;
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