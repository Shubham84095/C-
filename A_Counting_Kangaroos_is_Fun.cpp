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
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

bool check(int mid, int n, vector <int>& V){
    int i = 0;
    int j = n - mid;
    int cnt = 0;

    while((i < mid) && (j < n)){
        if(V[j] >= 2*V[i]){
            cnt++;
            i++;
        }
        j++;
    }

    if(cnt >= (n - mid)) return true;
    return false;
}

void Solution()
{
    int n;
    cin >> n;

    vector <int> V(n);
    for(int i = 0; i < n; i++) cin >> V[i];

    sort(all(V));

    int l = (n + 1)/2;
    int r = n;
    int mid = l + (r-l)/2;

    while(l < r){
        bool isPossible = check(mid, n, V);

        if(isPossible) r = mid;
        else l = mid + 1;

        mid = l + (r-l)/2;
    }

    cout << mid << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}