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
    string s;
    cin >> n >> s;
        
    sort(s.begin(), s.end()); 
    vector <char> C(2*n);
    int j = 0;
    int i = 0;
    while(i < 2*n){
        C[i] = s[j];
        i += 2;
        j++;
    }

    // print(C);
    // cout << endl;

    int cnt = 0;
    i = 1, j = 2*n-2;

    while(cnt < (n+1)/2 && i < 2*n && j >= 0){
        // cout << C[j] << endl;
        C[i] = C[j];
        i += 2;
        j -= 2;
        cnt++;
    }

    for(int i = 0; i < n; i++){
        cout << C[i];
    }cout << endl;
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