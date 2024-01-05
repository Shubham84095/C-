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
    string str, ans = "";
    cin >> str;
    int i = 0;
    while(i < n){
        if(str[i] == 'a' || str[i] == 'e'){
            if(i+2 < n){
                if(str[i+2] == 'a' || str[i+2] == 'e'){
                    cout << str[i] << "." ;
                    i++;
                    continue;
                }
                else{
                    cout << str[i] << str[i+1] << ".";
                    i += 2;
                    continue;
                }
            }
        }
        cout << str[i++];
    }
    cout << "\n"; 
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