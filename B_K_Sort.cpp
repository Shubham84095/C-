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
    vector <int> A(n), B(n);
    for(auto& i:A) cin >> i;

    int ele = A[0];
    B[0] = A[0];
    for(int i = 0; i < n; i++){
        if(A[i] < ele){
            B[i] = ele;
        }
        else{
            B[i] = A[i];
            ele = A[i];
        }
    }

    // print(B);cout << endl;

    vector <int> diff;
    for(int i = 0; i < n; i++){
        if(A[i] != B[i]) diff.push_back(B[i]-A[i]);
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(A[i] != B[i]) cnt++;
    }
    map <int, int> mp;
    for(int i = 0; i < diff.size(); i++) mp[diff[i]]++;

    int sum = 0;
    ll ans = 0;
    for(auto& j: mp){
        // cout << j.first << endl;
        ans += (cnt+1)*(j.first-sum);
        // cout << "ans -> " << ans << endl;
        sum = j.first;
        cnt -= j.second;
    }
    // int z = -1;
    // for(int i = 0; i < n; i++){
    //     if(A[i] != B[i]){
    //         z = A[i];
    //         break;
    //     }
    // }

    // ll ans = 0;
    // for(int i = 0; i < n; i++){
    //     if(A[i] != B[i]){
    //         ans += (B[i]-z)*(cnt+1);
    //         z = B[i];
    //         cnt--;
    //     }
    // }

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