#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> V(n, vector<char>(m));
    vector<vector<char>> S(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> V[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            S[i][0] = 'B';
        else
            S[i][0] = 'W';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) { 
            if (S[i][j - 1] == 'B') {
                S[i][j] = 'W';
            } else {
                S[i][j] = 'B';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (V[i][j] == '-') {
                S[i][j] = '-';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << S[i][j];
        }
        cout << endl;
    }

    return 0;
}
