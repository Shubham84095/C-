#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;


void Solution()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int ans = INT_MAX;
    
    for(int i = 0; i <= k; i++){
        string t = s;
        int tempK = i;
        int j = 0;
        while(j < n){
            if(t[j] == '1' && tempK > 0){
                t[j] = '0';
                tempK--;
            }
            j++;
        }

        j = n-1;
        tempK = (k-i);
        while(j >= 0 && tempK > 0){
            if(t[j] == '0' && tempK > 0){
                t[j] = '1';
                tempK--;
            }
            j--;
        }

        ll tAns = 0;
        ll temp = 0;
        for(int i = 0; i < n; i++){
            if(t[i] == '1') temp++;
            else tAns += temp;
        }

        ans = min(ans, tAns);
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}