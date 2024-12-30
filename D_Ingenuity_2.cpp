#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
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
    string s;
    cin >> n;
    cin >> s;

    int cntN = 0;
    int cntS = 0;
    int cntW = 0;
    int cntE = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'N') cntN++;
        if(s[i] == 'S') cntS++;
        if(s[i] == 'W') cntW++;
        if(s[i] == 'E') cntE++;
    }

    int N = cntN%2;
    int W = cntW%2;
    int S = cntS%2;
    int E = cntE%2;

    

    // cout << "reaching 1" << endl;
    
    int nr1 = cntN/2;
    int es1 = cntE/2;
    int st1 = cntS/2;
    int we1 = cntW/2;
    int nr2 = cntN/2;
    int es2 = cntE/2;
    int st2 = cntS/2;
    int we2 = cntW/2;

    if((nr1 == 0 && st1 == 0 &&  we1 == 0 && es1 == 0) && !(N == 1 && S == 1 && W && E)){
        cout << "NO\n";
        return;
    }

    if(N != S || W != E ){
        cout << "NO\n";
        return;
    }

    if((nr1 == 0 && st1 == 0 &&  we1 == 0 && es1 == 0) && (N == 1 && S == 1 && W && E)){
        if((N == 1 && S == 1 && W && E)){
            for(int i = 0; i < n; i++){
                if(s[i] == 'W' || s[i] == 'E') cout << "H";
                if(s[i] == 'N' || s[i] == 'S') cout << "R";
            }
            cout << endl;
            return;
        }
    }

    // cout << nr1 << " " << nr2 << endl;

    string ans = s;

    for(int i = 0; i < n; i++){
        // cout << i << endl;
        if(s[i] == 'N'){
            if(nr1>0){
                ans[i] = 'R';
                nr1 -= 1;
            }
            else if(nr2>0){
                ans[i] = 'H';
                nr2 -= 1;
            }
        }
        if(s[i] == 'S'){
            if(st1>0){
                ans[i] = 'R';
                st1 -= 1;
            }
            else if(st2 > 0){
                ans[i] = 'H';
                st2 -= 1;
            }
        }
        if(s[i] == 'W'){
            if(we1 > 0){
                ans[i] = 'R';
                we1 -= 1;
            }
            else if(we2 > 0){
                ans[i] = 'H';
                we2 -= 1;
            }
        }
        if(s[i] == 'E'){
            if(es1>0){
                ans[i] = 'R';
                es1 -= 1;
            }
            else if(es2>0){
                ans[i] = 'H';
                es2 -= 1;
            }
        }
        // cout << ans << endl;
    }


    // cout << ans << endl;
    for(int i = 0; i < n; i++){
        if(ans[i] == s[i]){
            ans[i] = 'R';
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