#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    vector <int> V(n);
 
    for(int i=0;i<V.size();i++){
        cin>>V[i];
    }
 
    int queries;
    cin>>queries;
 
    int A[queries];
    for(int i=0;i<queries;i++){
        cin>>A[i];
    }
 
    int count_1=0,count_2=0,j=0;
    int sum1=0,sum2=0;
 
    while(queries--){
        for(int i=0;i<n;i++){
            if(V[i]==A[j]){
                count_1=i+1;
                count_2=n-i;
                break;
            }
        }
        sum1+=count_1;
        sum2+=count_2;
        j++;
    }
 
    cout<<sum1<<" "<<sum2;
 
    return 0;
}