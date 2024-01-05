#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,min=INT64_MAX,min_idx,min_count=0;
    cin>>n;

    vector <long long int> V(n);

    for(int i=0;i<V.size();i++){
        cin>>V[i];
        if(V[i]<=min){
            min_idx=i;
            if(min==V[i]){
                min_count++;
            }
            else{
                min_count=0;
            }
            min=V[i];
        }
    }

    if(min_count){
        cout<<"Still Rozdil";
    }
    else{
        cout<<min_idx+1;
    }



    return 0;
}