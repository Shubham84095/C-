#include <bits/stdc++.h>
using namespace std;

void Solution()
{
    int n;
    cin >> n;
    vector <char> V(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }
    vector <int> alp(26,0);
    for(int i = 0; i < n; i++){
        alp[V[i]-'A']++;
    }
    int count = 0;
    for(int i = 0; i < 26; i++){
        if(alp[i] >= i+1){
            count++;
        }
    }

    cout << count << "\n";
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