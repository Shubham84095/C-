#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Solution()
{
    int n, countNegative = 0;
    cin >> n;

    bool check_0 = false;
    vector <ll> V(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
        if(V[i] == 0) check_0 = true;
        if(V[i] < 0) countNegative++;
    }

    if(check_0){
        cout << "0\n";
        return;
    }

    (countNegative & 1)? cout << "0\n" : cout << "1\n1 0\n"; 

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