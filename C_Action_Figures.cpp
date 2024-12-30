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
    int n;
    cin >> n;
    string S;
    cin >> S;

    int i = 0, j = n-1;
    ll cost = 0;
    while(i <= j){
        if(S[j] == '1'){
            int x = j-1;

            while(x > i && S[x] != '1'){
                cost += (x+1);
                x--;
            }

            if(j-x <= 1){
                cost += i+1;
                i++;
            }
            j = x;
        }
        else{
            cost += i+1;
            break;
        }
    }

    cout << cost << endl;
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