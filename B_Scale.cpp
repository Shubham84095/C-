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
    int n, k;
    cin >> n >> k;

    vector <string> s(n);
    vector <vector <int>> V(n, vector <int> (n));
    vector <vector <int>> ans;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        for(int j = 0; j < n; j++){
            V[i][j] = s[i][j]-'0';
        }
    }

    for(int i = 0; i < n; i += k){
        vector <int> temp;
        for(int j = 0; j < n; j+= k){
            temp.push_back(V[i][j]);
        }
        ans.push_back(temp);
    }

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j];
        }
        cout << endl;
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