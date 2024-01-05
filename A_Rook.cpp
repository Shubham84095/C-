#include <bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solution()
{
    string pos;
    cin >> pos;

    for (int i = 1; i <= 8; i++)
    {
        if(pos[1] -'0' != i){
            cout << pos[0] << i << "\n"; 
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if(pos[0] != 'a'+i){
            char temp = 'a'+i;
            cout << temp << pos[1] << "\n"; 
        }
    }

    return ;

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