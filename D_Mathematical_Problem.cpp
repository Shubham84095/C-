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
    string s;
    cin >> s;
    if(n == 2){
        cout << (s[0]-'0')*10 + (s[1]-'0') << endl;
        return;
    }

    if(n == 3){
        int a = s[0]-'0';
        int b = s[1]-'0';
        int c = s[2]-'0';

        int prod1 = a*10+b;
        int prod2 = b*10+c;
        int x = min(prod1+c, prod2+a);
        int y = min(prod1*c, prod2*a);
        cout << min(x,y) << endl;
        return;
    }

    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            cout << "0\n";
            return;
        }
    }

    
    vector <vector<int>> V(n-1);
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n; j++){
            if(j == i){
                V[i].push_back((s[j]-'0')*10 + (s[j+1]-'0'));
                j++;
            }
            else{
                V[i].push_back(s[j]-'0');
            }
        }
    }

    // for(int i = 0; i < n-1; i++){
    //     for(int j = 0; j < n-1; j++){
    //         cout << V[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    ll ans = INT64_MAX;

    for(int i = 0; i < n-1; i++){
        ll temp;
        temp = min(V[i][0]*V[i][1], V[i][0]+V[i][1]);
        for(int j = 2; j < n-1; j++){
            temp = min(1LL*temp*V[i][j], temp+V[i][j]);
        }
        ans = min(temp, ans);
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