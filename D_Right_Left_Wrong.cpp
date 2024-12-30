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
    int N;
    cin >> N;
    vector<pair<char, ll>> V(N + 1);
    V[0] = {'.', 0};
    int cL = 0, cR = 0;
    vector<int> L, R;
    for (int i = 1; i <= N; i++) cin >> V[i].second;
    for (int i = 1; i <= N; i++) {
        cin >> V[i].first;
        cL += (V[i].first == 'L');
        cR += (V[i].first == 'R');
        if (V[i].first == 'L') L.push_back(i);
        if (V[i].first == 'R') R.push_back(i);
    }

    for (int i = 1; i <= N; i++) {
        V[i].second = V[i].second + V[i - 1].second;
    }

    int i = 1, j = N;
    ll ans = 0;
    while(i < j){
        if(V[i].first == 'L' && V[j].first == 'R'){
            ans += (V[j].second-V[i-1].second);
            i++;
            j--;
        }
        else if(V[i].first == 'R'){
            i++;
        }
        else if(V[j].first == 'L'){
            j--;
        }
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