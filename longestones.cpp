#include <iostream>
#include <string>

using namespace std;

int longestOnes(string s,int k){
    int start=0,end=0,max_length=0,zero_count=0;

    for(;end<s.size();end++){

        if(s[end]=='0'){
            zero_count++;
            
        }

        while(zero_count>k){
            if(s[start]=='0'){
            zero_count--;
            start++;
            }
            
            
        }

        max_length=max(max_length,end-start+1);
    }

    return max_length;

}

int main(){

    string s;
    int k;
    cout<<"enter the binary strings : ";

    cin>>s;

    cout<<"enter the value of k : ";

    cin>>k;

    cout<<longestOnes(s,k)<<endl;


    return 0;
}