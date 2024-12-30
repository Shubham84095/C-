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
    ll H, W, X;
    cin >> H >> W >> X;

    ll P, Q;
    cin >> P >> Q;
    P--, Q--;

    vector <vector <int>> S(H, vector <int> (W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> S[i][j];
        }
    }

    set <pair<int, int>> st;
    set <vector <int>> A;
    st.insert({P, Q});
    ll ans = 0;

    int x = P, y = Q;
    while(true){
        ans += S[x][y];
        ll lim = ceil((1.0*ans)/X);

        if(x+1 < H && st.find({x+1, y}) == st.end()){
            A.insert({S[x+1][y], x+1, y});
            st.insert({x+1, y});
        }
        if(y+1 < W && st.find({x, y+1}) == st.end()){
            A.insert({S[x][y+1], x, y+1});
            st.insert({x, y+1});
        }
        if(y > 0 && st.find({x, y-1}) == st.end()){
            A.insert({S[x][y-1], x, y-1});
            st.insert({x, y-1});
        }
        if(x > 0 && st.find({x-1, y}) == st.end()){
            A.insert({S[x-1][y], x-1, y});
            st.insert({x-1, y});
        }

        auto B = *A.begin();
        if(B[0] < lim){
            x = B[1];
            y = B[2];
            A.erase(A.begin());
        }
        else break;
    }

    cout << ans << endl;
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