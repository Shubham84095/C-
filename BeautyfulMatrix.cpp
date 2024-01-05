#include <iostream>
#include <vector>
#include <cstdlib> 
using namespace std;

int beautymat(vector<vector<int>>&v){
    int cordx=-1,cordy,steps;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[i][j]==1){
                cordx=i;
                cordy=j;
                break;
            }
        }
        if(cordx==i){
            break;
        }
    }

    steps=abs(cordx-2)+abs(cordy-2);
    return steps;
}

int main(){
    vector<vector<int>>v(5,vector<int>(5));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            cin>>v[i][j];
        }
    }

    cout<<beautymat(v)<<endl;
    return 0;
}