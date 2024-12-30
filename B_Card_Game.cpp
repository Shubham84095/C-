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
    int A[4];
    for(int i = 0; i < 4; i++) cin >> A[i];

    int cnt = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 2; j < 4; j++){
            int cntA = 0;
            int cntB = 0;
            if(A[i] > A[j]){
                cntA++;
            }
            else if(A[i] < A[j]) cntB++;
            if(A[!i] > A[(j == 3)?2:3]){
                cntA++;
            }
            else if(A[!i] < A[(j == 3)?2:3]){
                cntB++;
            }
            cnt += (cntA > cntB);
        }
    }

    cout << cnt << endl;
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