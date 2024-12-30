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
    string A, B;
    cin >> A >> B;

    int n = A.length(), m = B.length();

    int i = 0, j = 0;
    while(i < n && j < m){
        if(A[i] == B[j]){
            i++, j++;
        }
        else if(A[i] == '?'){
            A[i] = B[j];
            i++, j++;
        }
        else{
            i++;
        }
    }

    if(j == m && i <= n){
        for(int i = 0; i < n; i++){
            if(A[i] == '?') A[i] = 'a';
        }
        yes();
        cout << A << endl;
    }
    else{
        no();
    }
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