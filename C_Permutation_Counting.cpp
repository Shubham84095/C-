#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    ll n,k;
    cin >> n >> k;
    ll maxi = INT64_MIN;
    ll mini = INT64_MAX;

    // vector V for storing frequency of each count 
    map <ll, ll> V;
    vector <ll> T(n);

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        T[i] = temp;
        V[temp]++;
        maxi = max(maxi,temp);
        mini = min(mini,temp);
    }

    if(n == 1) {
        cout << n + k << endl;
        return;
    }

    int len = maxi-mini;
    vector <ll> S(len);
    ll freq = 0;
    for(int i  = 0; i < len; i++){
        freq += V[mini];
        S[i] = freq;
        mini++;    
    }

    for(int i  = 1;  i < len; i++){
        S[i] += (S[i-1]);
    }
    ll steps = 0, idx = -1;
    for(int i = 0; i < len; i++){
        if(S[i] <= k) steps++;
        if(S[i] > k) {
            idx = i;
            break;
        }
    }

    bool flag = false;
    if(idx == -1){
        idx = len;
        flag = true;
    }

    // cout << steps << " " << idx << endl;
    
    // for(int i = 0; i < len; i++){
    //     cout << S[i] << " ";
    // }
    // cout << endl;
    ll miniNum = *min_element(T.begin(), T.end());
    ll minSame = miniNum + steps;
    ll counti = 0;
    for(int i = 0; i < n; i++){
        if(T[i] > minSame) counti++;
    }


    ll ans = 0;
    ll a = (k - S[idx-1]);
    if(a > 0 && flag){
        // cout << a << endl;
        minSame += (a/n);
        ll x = (a%n);
        cout << (minSame*n + x - (n-1)) << endl;
        return; 
    }

    // cout << minSame << " " << counti << " " << a << endl;
    ans = minSame*n + counti + (k - S[idx-1]) - (n-1);
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}