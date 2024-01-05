#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Solution()
{
    int n, d, h;
    cin >> n >> d >> h;
    
    vector <ll> yi(n);
    for(int i = 0; i < n; i++){
        cin >> yi[i];
    }

    double area = 0.5 * h * d;
    double areaSum = 0;

    for(int i = 0; i < n - 1; i++){
        if((yi[i+1] - yi[i]) >= h){
            areaSum += area;
        }
        else {
            double addArea = 0.5 * (((h - (yi[i+1] - yi[i]))*d/(h*1.0)) + d) * (yi[i+1] - yi[i]);
            areaSum += addArea;
        }
    }

    areaSum += area;
    cout << fixed << setprecision(9) << areaSum << "\n";
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