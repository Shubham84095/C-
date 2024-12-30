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
    vector <int> A(n);
    for(auto& e: A) cin >> e;

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        if(s.length() != n){
            no();
        }
        else{
            vector <int> V(26, 1e9+1);
            map <int, bool> mp;
            bool flag = false;
            for(int i = 0; i < n; i++){
                int id = s[i]-'a';
                if(V[id] != 1e9+1 && A[i] != V[id]){
                    no();
                    flag = true;
                    break;
                }
                else if(V[id] == 1e9+1){
                    if(mp[A[i]] == true){
                        no();
                        flag = true;
                        break;
                    }
                    mp[A[i]] = true;
                    V[id] = A[i];
                }
            }
            if(flag) continue;
            yes();
        }
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