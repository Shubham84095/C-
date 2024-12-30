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
    int n, m;
    cin >> n >> m;
    string s,t;
    set <int> V;

    cin >> s;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        V.insert(temp);
    }
    cin >> t;
    sort(all(t));
    int i = 0;
    for(auto it = V.begin(); it != V.end(); it++){
        s[*it-1] = t[i];
        // cout << *it << " " << t[i] << endl;
        i++;
    }
    cout << s << endl;
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