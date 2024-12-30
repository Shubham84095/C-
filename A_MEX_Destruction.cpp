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
    vector <int> A(n);
    int cnt = 0;
    for(auto& e: A){
        cin >> e;
        cnt += (e == 0);
    }

    int i;
    for(i = 0; i < n; i++){
        if(A[i] == 0){
            cnt--;
        }
        else break;
    }
    int j;
    for(j = n-1; j > i; j--){
        if(A[j] == 0){
            cnt--;
        }
        else break;
    }
    // cout << i << " " << j << endl;
    if(cnt == 0 && (i > j)){
        cout << "0\n";
    }
    else if(cnt == 0 && (i <= j)){
        cout << "1\n";
    }
    else if(cnt != 0){
        cout << "2\n";
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