#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n"
#define bob() cout <<"Bob\n"
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;

    string a = to_string(n);
    string s = "";
    for(int i = 0; i <= 7; i++){
        s += a;
    }

    int len = 0;
    int nt = n;
    while(nt != 0){
        nt /= 10;
        len++;
    }


    vector <pair<int, int>> ans;

    for(int a = 1; a <= 1e4; a++){
        int bmax = min(n*a, 10000LL);
        ll num = 0;
        for(int i = 1; i <= 7; i++){
            string z = s.substr(0, i);
            int corrAns = stoi(z);
            int b = n*a - corrAns;
            if(b >= 1 && b <= bmax && (len*a-b) == i){
                ans.push_back({a,b});
            }
        }
    }

    cout << ans.size() << endl;
    for(auto& j: ans){
        cout << j.first << " " << j.second << endl;
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