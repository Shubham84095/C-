#include <bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solution()
{
    int n,k;
    cin>>n>>k;

    vector <int> V(n);
    for(int i=0;i<V.size();i++){
        cin>>V[i];
    }

    if(k>1){
        cout<<"YES\n";
        return;
    }

    if(k==1){
        for(int i=0;i<V.size()-1;i++){
            if(V[i+1]<V[i]){
                cout<<"NO\n";
                return;
            }
        }

        cout<<"YES\n";
        return ;
    }
}

int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        Solution();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.";
    return 0;
}