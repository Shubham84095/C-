#include <bits/stdc++.h>
using namespace std;

void Solution()
{
    int n;
    cin >> n;
    vector <int> V(4,0);
    int x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x > 0) V[0]++;
        if(x < 0) V[1]++;
        if(y > 0) V[2]++;
        if(y < 0) V[3]++;
    }

    bool check = true;
    if(V[0] && V[1] && V[2] && V[3]) check = false;
    (check) ? cout << "YES\n": cout << "NO\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}