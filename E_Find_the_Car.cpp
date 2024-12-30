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

void Solution()
{
    ll n, k, q;
    cin >> n >> k >> q;

    vector <int> points(k+1);
    vector <int> time(k+1);
    points[0] = 0;
    time[0] = 0;
    for(int i = 1; i <= k; i++) cin >> points[i];
    for(int i = 1; i <= k; i++) cin >> time[i];

    while(q--){
        int d;
        cin >> d;
        if(d == 0){
            cout << 0 << " ";
            continue;
        }

        int prevIdx = (lower_bound(points.begin(), points.end(), d)-points.begin());
        int totTime = time[prevIdx-1];

        int temp = ((d-points[prevIdx-1]));
        double tempTime = ((time[prevIdx]-time[prevIdx-1])*1.0*temp)/(points[prevIdx]-points[prevIdx-1]);
        totTime += (tempTime);
        cout << totTime << " ";
    } cout << endl;
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