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
    int n;
    cin >> n;
    vector <int> V(n);
    for(auto& e: V) cin >> e;

    vector <pair<int, int>> ans;

    vector <int> S(n+1, 1);
    S[0] = 0;
    for(int i = n-1; i >= 0; i--){
        int num = V[i];
        S[num] = 0;
        int j = num-1;
        while(j > 0){
            if(S[j])
            ans.push_back({num, j});
            j--;
        }

        while(j < num){
            if(S[j])
            ans.push_back({j, num});
            j++;
        }

        j = num + 1;
        while(j <= n){
            if(S[j])
            ans.push_back({j, num});
            j++;
        }
    }

    cout << (int)(ans.size()) << endl;

    for(auto& e: ans){
        cout << e.first << " " << e.second << endl;
    }
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