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
    string a, b;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();


    int cnt = 0;

    vector <int> idx;

    for(int i = 0; i < m; i++){
        int k = i;
        for(int j = 0; j < n; j++){
            if(b[k] == a[j] && !idx.empty() && j > idx.back() && a[idx.back()] == b[k-1]){
                idx.push_back(j);
                k++;
            }
            else if(b[k] == a[j] && idx.empty()){
                idx.push_back(j);
                k++;
            }
        }
            cnt = max(cnt, (int)idx.size());
            idx.clear();
    }

    // cout << cnt << endl;

    // print(idx);
    // cout << endl;

    // cnt = idx.size();
    cout << a.length()+b.length()-cnt << endl;
    
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