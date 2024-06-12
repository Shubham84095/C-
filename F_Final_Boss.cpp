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

    bool possible(vector <pair<int, int>>& V, int h, ll mid, int n){
        ll sum = 0;
        for(int i = 0; i < n; i++){
            ll attempt = floor(mid/V[i].first);
            sum += (V[i].second*attempt);
            if(sum >= h) return true;
        }
        
        return false;
    }
    
    void Solution()
    {
        int h, n;
        cin >> h >> n;
        vector <pair<int, int>> V(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> V[i].second;
            sum += V[i].second;
        }
        for(int i = 0; i < n; i++){
            cin >> V[i].first;
            
        }

        int ans = 0;
        h -= sum;
        if(h <= 0){
            cout << "1\n";
            return;
        }
        
        ll l = 1;
        ll r = 1e18;
        ll mid = l + (r-l)/2;

        while(l < r){
            if(possible(V, h, mid, n)){
                r =  mid;
            }
            else{
                l = mid+1;
            }
            mid = l + (r-l)/2;
        }
        cout << mid+1 << endl;
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