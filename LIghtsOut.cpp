#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <vector<int>> final(3,vector<int> (3,1));    
    vector <vector<int>> initial(3,vector<int> (3)); 

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>initial[i][j];
        }
    }   

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            while(initial[i][j]--){
                if((i-1)>=0){
                    (final[i-1][j]==1)?final[i-1][j]=0:final[i-1][j]=1;
                }

                if((j-1)>=0){
                    (final[i][j-1]==1)?final[i][j-1]=0:final[i][j-1]=1;
                }

                if((i+1)<3){
                    (final[i+1][j]==1)?final[i+1][j]=0:final[i+1][j]=1;
                }
                if((j+1)<3){
                    (final[i][j+1]==1)?final[i][j+1]=0:final[i][j+1]=1;
                }
                (final[i][j]==1)?final[i][j]=0:final[i][j]=1;

            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<final[i][j];
        }
        cout<<endl;
    }





    return 0;
}