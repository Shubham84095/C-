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

int isOK(string& s, int k, int n) {
    int cnt = 0;
    int ans = 0;
    vector <int> V(n, 0);
    for(int i = 0; i < n; i++){
        if((s[i] == '1' && cnt%2 == 1) || (s[i] == '0' && cnt%2 == 0)){
            if(i > n-k) return false;
            ans++;
            cnt++;
            V[i+k-1]--;
        }
        cnt += V[i];
    }

    return true;
}
    

void Solution()
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    for(int i = N; i >= 2; i--){
        if(isOK(S, i, N)){
            cout << i << endl;
            return;
        }
    }

    cout << "1\n";
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