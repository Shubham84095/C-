#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;

    vector <vector <char>> A(n, vector <char> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
        }
    }

    char a = '0';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(A[i][j] == '.' && i > 0 && A[i-1][j] != '#' && A[i-1][j] != '.'){
                A[i][j] = A[i-1][j];
            }
            else if(A[i][j] == '.' && j > 0 && A[i][j-1] != '#' && A[i][j-1] != '.'){
                A[i][j] = A[i][j-1];
            }
            else if(A[i][j] == '.' && i+1 < n && A[i+1][j] != '#' && A[i+1][j] != '.'){
                A[i][j] = A[i+1][j];
            }
            else if(A[i][j] == '.' && j+1 < m && A[i][j+1] != '#' && A[i][j+1] != '.'){
                A[i][j] = A[i][j+1];
            }
            else if(A[i][j] == '.'){
                A[i][j] = a;
                if(i+1 < n && A[i+1][j] == '.') A[i+1][j] = a;
                if(j+1 < m && A[i][j+1] == '.') A[i][j+1] = a;
                if(i > 0 && A[i-1][j] == '.') A[i-1][j] = a;
                if(j > 0 && A[i][j-1] == '.') A[i][j-1] = a;
                a++;
            }
        }
    }
    
    cout << a - '0' << endl;
    return 0;
}