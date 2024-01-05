#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector <char> V(3*n);

    for(int i=0;i<V.size();i++){
        cin>>V[i];
    }

    int count=0;
    int j=1;

    for(int i=0;i<n;i++){
        if(V[j]=='+'){
            count++;
            j=j+3;
        }
        else{
            count--;
            j+=3;
        }
    }

    cout<<count;

    return 0;
}