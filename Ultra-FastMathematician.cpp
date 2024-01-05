#include <bits/stdc++.h>
using namespace std;

int main(){
  string num1,num2,num3;
  cin>>num1>>num2;
  num3.resize(num1.length());
  
  for(int i=0;i<num1.length();i++){
    if(num1[i]==num2[i]){
        num3[i]='0';
    }
    else{
        num3[i]='1';
    }
  }

  for(int i=0;i<num3.length();i++){
    cout<<num3[i];
  }

  return 0;
    
}