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
    int a = 1, b = 500;
    int z = 999;
    int x = 1;

    while(true){
        cout << "? " << a << " " << b << endl;
        cout << flush;
        int A;
        cin >> A;
        if(A == (a*b)){
            x = b;
            b = (z+b+1)/2;
        }
        else{
            z = b;
            b = (x+b)/2;
        }
        if(z-x == 1) break;
    }

    cout << "! " << z << endl;
    cout << flush;
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