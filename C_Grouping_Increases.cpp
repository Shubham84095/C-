#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;

    int count =  0;
    vector <int> V(n);
    vector <int> S, T;
    for(int i = 0; i < n; i++){
        cin >> V[i];

    }
    
    int x = INT_MAX, y = INT_MAX;

    for(int i = 0;  i < n; i++){
       if(x > y){
        swap(x,y);
       }

       if(V[i] <= x){
        x = V[i];
       }else if(V[i] <=  y){
        y = V[i];
       }else{
        x = V[i];
        count++;
       }
    }

    cout << count << "\n";

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