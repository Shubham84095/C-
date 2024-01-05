#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{

    int idx, idx2;
    vector <vector <char>> V(3, vector <char> (3));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> V[i][j];
            if(V[i][j] == '?'){
                idx = j;
                idx2 = i;
            }
        }
    }

    if(idx == 0){
        if(V[idx2][1] != 'A' && V[idx2][2] != 'A'){
            cout << "A\n";
        }
        if(V[idx2][1] != 'B' && V[idx2][2] != 'B'){
            cout << "B\n";
        }
        if(V[idx2][1] != 'C' && V[idx2][2] != 'C'){
            cout << "C\n";
        }
    }
    if(idx == 1){
        if(V[idx2][0] != 'A' && V[idx2][2] != 'A'){
            cout << "A\n";
        }
        if(V[idx2][0] != 'B' && V[idx2][2] != 'B'){
            cout << "B\n";
        }
        if(V[idx2][0] != 'C' && V[idx2][2] != 'C'){
            cout << "C\n";
        }
    }
    if(idx == 2){
        if(V[idx2][1] != 'A' && V[idx2][0] != 'A'){
            cout << "A\n";
        }
        if(V[idx2][1] != 'B' && V[idx2][0] != 'B'){
            cout << "B\n";
        }
        if(V[idx2][1] != 'C' && V[idx2][0] != 'C'){
            cout << "C\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}