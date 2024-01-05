#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n;
   cin>>n;
   int count=0,sum=0;
   vector<vector<int>>v(n,vector<int> (3));
   for(int i=0;i<n;i++){
       for(int j=0;j<3;j++){
           cin>>v[i][j];
       }
   }
   for(int j=0;j<3;j++){
       for(int i=0;i<n;i++){
           sum+=v[i][j];
       }
       if(sum==0){
           count++;
       }
   }
   if(count==3)
   cout<<"YES"<<endl;
   else 
   cout<<"NO"<<endl;

    return 0;
}