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
    vector <vector <char>> A(2, vector <char> (n));

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    if(n == 1){
        if(A[0][0] == A[1][0]){
            cout << "Unique\n";
        }
        else{
            cout << "None\n";
        }
        return;
    }

    for(int i = 0; i < n; i++){
        if(i+1 < n && A[0][i] == '.' && A[0][i+1] == '.' && A[1][i] == '#'){
            A[0][i] = '#';
            A[0][i+1] = '#';
        }
        else if(i+1 < n && A[0][i] == '.' && A[0][i+1] == '#' && A[1][i] == '.' ){
            A[0][i] = '#';
            A[1][i] = '#';
        }
        
        if(i+1 < n && A[1][i] == '.' && A[1][i+1] == '.' && A[0][i] == '#'){
            A[1][i] = '#';
            A[1][i+1] = '#';
        }
        else if(i+1 < n && A[1][i] == '.' && A[1][i+1] == '#' && A[0][i] == '.'){
            A[1][i] = '#';
            A[0][i] = '#';
        }

        if(i == n-1){
            if(A[0][i] == '.' && A[0][i-1] == '.' && A[1][i] == '#'){
                A[0][i] = '#';
                A[0][i-1] = '#';
            }
            else if(A[1][i] == '.' && A[1][i-1] == '.' && A[0][i] == '#'){
                A[0][i] = '#';
                A[0][i-1] = '#';
            }
            else if(A[0][i-1] == '#' && A[1][i-1] == '#' && A[1][i] == '.' && A[0][i] == '.'){
                A[0][i] = '#';
                A[1][i] = '#';
            }
        }
    }

    bool mul = 0;

    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << A[i][j];
    //     }
    //     cout << endl;
    // }


    for(int i = 0; i < n; i++){
        if(i+1 < n && A[0][i] == '.' && A[0][i+1] == '.') A[0][i] = '#', A[0][i+1] = '#', mul = true;
        if(A[0][i] == '.' && A[1][i] == '.') A[0][i] = '#' , A[1][i] = '#', mul = true;
        if(i+1 < n && A[1][i] == '.' && A[1][i+1] == '.') A[1][i] = '#', A[1][i+1] = '#', mul = true;
    }


    for(int i = 0; i < n; i++){
        if(A[0][i] == '.' || A[1][i] == '.'){
            cout << "None\n";
            return;
        }
    }

    if(mul) cout << "Multiple\n";
    else cout << "Unique\n";

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