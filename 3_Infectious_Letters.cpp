#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, count = 0;
    cin >> n;

    vector <char> V(n);

    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    for(int i = 0; i < n-1; i++){
        if(V[i] == 'a' && V[i+1] != 'b'){
            V[i+1] = 'a'; 
        }
    }

    for(int i = n-1; i > 0; i--){
        if(V[i] == 'a' && V[i-1] != 'b'){
            V[i-1] = 'a';
        }
    }

    for(int i = 0; i < n; i++){
        if(V[i] == 'a'){
            count++; 
        }
    }
    cout << count << endl;
    return 0;
}