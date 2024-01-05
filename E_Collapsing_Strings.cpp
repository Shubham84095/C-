#include <bits/stdc++.h>
using namespace std;

long long length(string A, string B){
    int i = A.length() - 1;
    int j = 0;

    int B_len = B.length();

    while (A[i] == B[j]){
        j++;
        i--;

        if(i < 0 || j > (B_len-1)){
            break;
        }
    }
    return  (i+1) + (B_len-j);
}

int main()
{
    int n ;
    cin >> n;

    long long sum = 0;

    vector <string> V;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        V.push_back(s);
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            sum += length(V[i],V[j]);
        }
    }

    cout << sum << endl;

    return 0;
}