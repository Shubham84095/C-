#include <bits/stdc++.h>
using namespace std;


int main()
{
    
    int n,count=0;
    
    cin>>n;

    vector <char> stone(n);
    for(int i=0;i<n;i++){
        cin>>stone[i];
    }

    for(int i=0;i<stone.size()-1;){
        if(stone[i]==stone[i+1]){
            count++;
            stone.erase(stone.begin()+i+1);
        }
        else{
            i++;
        }
    }

    cout<<count<<"\n";

    return 0;

}    

