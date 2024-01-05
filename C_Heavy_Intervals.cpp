#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Solution()
{
    int n, temp;
    cin >> n;
    vector <int> l, r, c, rtemp, diff1(n), diff2(n);

    long long ans1 = 0, ans2 = 0;

    for(int i = 0; i < n; i++){
        cin >> temp;
        l.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        cin >> temp;
        r.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        cin >> temp;
        c.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        rtemp.push_back(r[i]);
    }
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    sort(c.begin(), c.end(), greater<int>());
    sort(rtemp.begin(), rtemp.end(), greater<int>());
    

    bool check = true;
    for(int i = 0; i < n; i++){
        diff1[i] =  r[i] - l[i];
        diff2[i] = rtemp[i] - l[i];
        if(diff2[i] < 0) check = false;
    }
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        sum1 += diff1[i]*c[i];
    }
    if(check){
        for(int i = 0; i < n; i++){
            sum2 += diff2[i]*c[i];
        }
        cout << min(sum1,sum2) << "\n";
        return;
    }
    else{
        cout << sum1 << "\n";
    }

    
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