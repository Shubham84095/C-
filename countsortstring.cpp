#include <iostream>
#include <string>
#include <vector>

using namespace std;

string countsort(string str){
    vector <int> freq(26,0);
    for(int i=0;i<str.length();i++){
        int index=str[i]-'a';
        freq[index]++;
    }

    int j=0;
    for(int i=0;i<freq.size();i++){
        while(freq[i]--){
            str[j++]='a'+i;
        }
    }

    return str;
}

int main(){

    string str;
    cin>>str;

    cout<<countsort(str)<<endl;
    return 0;
}