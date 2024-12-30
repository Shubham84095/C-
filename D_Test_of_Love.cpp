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
    int n, m, k;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    s.insert(s.begin(), 'B');

    vector <int> V(n+1);
    V[0] = k;
    int i = 1;
    int prev = 0;
    while(i <= n){
        if(s[i] == 'W'){
            if((i-prev) < m){
                V[i] = V[i-1];
            }
            else{
                V[i] = V[i-1]-1;
            }
            i++;
        }
        else if(s[i] == 'L'){
            prev = i;
            V[i] = V[i-1];
            i++;
        }
        else{
            while(s[i] == 'C'){
                if((i-prev) >= m){
                    no();
                    return;
                }
                else{
                    V[i] = V[i-1];
                }
                i++;
            }
        }
    }

    if(V[n] >= 0){
        yes();
    }
    else no();
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