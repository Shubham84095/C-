#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;

    cin>>word;
    int countsmall=0,countcap=0;

    for(int i=0;i<word.size();i++){
        word[i]>90?countsmall++:countcap++;
    }

    if(countcap>countsmall){
        for(int i=0;i<word.size();i++){
            if(word[i]>90){
                word[i]=word[i]-32;
            }
        }
    }
    else{
        for(int i=0;i<word.size();i++){
            if(word[i]<=90){
                word[i]=word[i]+32;
            }
        }
    }

    cout<<word;

    return 0;
}