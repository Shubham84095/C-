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

    vector<vector<char>> S(2, vector<char>(n)); 
    vector<vector<int>> V(2, vector<int>(n, 0)); 

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> S[i][j];
        }
    }

    int cnt = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 1; j < n-1; j++){
            if(i == 0 && S[i][j] == '.' && S[i+1][j] == '.'){
                if(S[i][j-1] == 'x' && S[i][j+1] == 'x' && S[i+1][j-1] == '.' && S[i+1][j+1] == '.') cnt++;
            }
            if(i == 1 && S[i][j] == '.' && S[i-1][j] == '.' && S[i-1][j-1] == '.' && S[i-1][j+1] == '.'){
                if(S[i][j-1] == 'x' && S[i][j+1] == 'x') cnt++;
            }
        }

    }

    // for (int j = 0; j < n; j++) {
    //     for (int i = 0; i < 2; i++) {
    //         if (S[i][j] == 'x') continue;
    //         if (S[i][j] == '.') {
    //             if (i > 0 && V[i-1][j] != 0 && V[i][j] == 0) {
    //                 V[i][j] = V[i-1][j]; 
    //             }
    //             if (j > 0 && V[i][j-1] != 0 && V[i][j] == 0) {
    //                 V[i][j] = V[i][j-1];  
                    
    //             }
    //             if (j < n-1 && V[i][j+1] != 0 && V[i][j] == 0) {
    //                 V[i][j] = V[i][j+1];  
                    
    //             }
    //             if (i == 0 && V[i+1][j] != 0 && V[i][j] == 0) { 
    //                 V[i][j] = V[i+1][j];
                    
    //             }

    //             if(V[i][j] == 0)
    //             V[i][j] = ++a;
    //             if(V[i][j] != 0){
    //                 if(j+1 < n && S[i][j+1] == '.'){
    //                 V[i][j+1] = V[i][j];
    //             }
    //             if(i > 0 && S[i-1][j] == '.'){
    //                 V[i-1][j] = V[i][j];
    //             }
    //             if(i == 0 && S[i+1][j] == '.' ){
    //                 V[i+1][j] = V[i][j];
    //             }
    //             if(j > 0 && S[i][j-1] == '.'){
    //                 V[i][j-1] = V[i][j];
    //             }
    //             }
    //         }
    //     }
    // }

    // int cnt = 0;


    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (S[i][j] == '.') {
    //             int temp = 0;
    //             if (i > 0 && V[i-1][j] != 0) {
    //                 if(j-1 > 0 && j+1 < n && V[i-1][j-1] == 0 && V[i-1][j+1] == 0){
    //                     temp++;
    //                 }
    //             }
    //             if (j > 0 && V[i][j-1] != 0) {
    //                 temp++;
    //             }
    //             if (j < n-1 && V[i][j+1] != 0) {
    //                 temp++;
    //             }
    //             if (i == 0 && V[i+1][j] != 0) {
    //                 if(j-1 > 0 && j+1 < n && V[i+1][j-1] == 0 && V[i+1][j+1] == 0){
    //                     temp++;
    //                 }
    //             }

    //             if (temp == 3 && a == 1) {
    //                 cnt++;
    //             }
    //         }
    //     }
    // }
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << V[i][j] << " ";
    //     }
    //     cout << endl;
    // }

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