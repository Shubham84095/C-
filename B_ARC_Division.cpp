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
    int N, R;
    cin >> N >> R;

    
    for(int i = 0; i < N; i++){
        int d, a;
        cin >> d >> a;
        if(d == 1){
            if(R >= 1600 && R <= 2799){
                R+=a;
            }
        }
        else{
            if(R >= 1200 && R <= 2399){
                R+=a;
            }
        }
    }
    cout << R << endl;
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