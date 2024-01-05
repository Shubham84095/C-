#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll f(vector <int> v1, vector <int> v2, vector <int> v3 , int n){
    int firstIdx = -1, secondIdx = -1;
    ll firstMax = -1,secondMax = -1, thirdMax = -1;
    for(int i = 0; i < n; i++){
        if(v1[i] > firstMax){
            firstMax = v1[i];
            firstIdx = i;
        }
    }
    v2[firstIdx] = v3[firstIdx] = -1;
    for(int i = 0; i < n; i++){
        if(v2[i] > secondMax){
            secondMax = v2[i];
            secondIdx = i;
        }
    }
    v3[secondIdx] = -1;
    for(int i = 0; i < n; i++){
        if(v3[i] > thirdMax){
            thirdMax = v3[i];
        }
    }

    return firstMax + secondMax + thirdMax;
}

void Solution()
{
    int n;
    cin >> n;

    vector <int> v1(n);
    vector <int> v2(n);
    vector <int> v3(n);

    for(int i = 0; i < n; i++){
        cin >> v1[i];
    }

    for(int i = 0; i < n; i++){
        cin >> v2[i];
    }

    for(int i = 0; i < n; i++){
        cin >> v3[i];
    }

    cout << max({f(v1,v2,v3,n), f(v1,v3,v2,n), f(v2,v3,v1,n), f(v2,v1,v3,n), f(v3,v1,v2,n), f(v3,v2,v1,n)}) << "\n";
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