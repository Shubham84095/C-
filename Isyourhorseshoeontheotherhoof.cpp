#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> A(4);

    for(int i=0;i<4;i++){
        cin>>A[i];
    }

    for(int i=0;i<A.size()-1;i++){
        for(int j=i+1;j<A.size();j++){
            if(A[i]==A[j]){
                A.erase(A.begin()+j);
                j--;
            }
        }
    }

    cout<<4-A.size();
    
    

    return 0;
}