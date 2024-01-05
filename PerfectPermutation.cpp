#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;


    if(n%2 && n>0){
        cout<<"-1";
        return 0;
    }
    
    vector <int> A(n);
    for(int i=0;i<n;i++){
        A[i]=i+1;
    }

    for(int i=0;i<n;i+=2){
        swap(A[i],A[i+1]);
    }

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }

    return 0;
}