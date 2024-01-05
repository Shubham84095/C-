#include <bits/stdc++.h>
#define ll long long
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solution()
{
    int a,b,c;
    cin>>a>>b>>c;

    if((b-c)%2==0){
        cout<<"1 ";
    }
    else{
        cout<<"0 ";
    }
    if((c-a)%2==0){
        cout<<"1 ";
    }
    else{
        cout<<"0 ";
    }
    if((b-a)%2==0){
        cout<<"1\n";
    }
    else{
        cout<<"0\n";
    }
    return;
}

int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll int t;
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