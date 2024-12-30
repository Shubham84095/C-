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
    vector <int> A, B;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(y == 0){
            A.push_back(x);
        }
        else B.push_back(x);
    }

    sort(all(A));
    sort(all(B));

    ll cnt = 0;
    int a = A.size();
    int b = B.size();
    int i = 0, j = 0;

    while (i < a && j < b) {
        if (A[i] == B[j]) {
            cnt += (b + a - 2);
            i++;
            j++;
        } else if (A[i] < B[j]) {
            i++;
        } else {
            j++;
        }
    }

    i = 0, j = 0;

    while(i < a && j < b){
        if(A[i] == B[j]){
            j++;
        }
        else if (A[i] < B[j]) {
            if (B[j] - A[i] == 1 && ((i + 1 < a && A[i + 1] == A[i] + 2) || (i + 2 < a && A[i + 2] == A[i] + 2))) {
                cnt++;
            }
            i++;
        }
        else if(A[i] > B[j]){
            j++;
        }
    }

    i = 0, j = 0;

    while(i < a && j < b){
        if(A[i] == B[j]){
            i++;
        }
        else if (B[j] < A[i]){
            if (A[i] - B[j] == 1 && ((j + 1 < b && B[j + 1] == B[j] + 2) || (j + 2 < b && B[j + 2] == B[j] + 2))) {
                cnt++;
            }
            j++;
        }
        else{
            i++;
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