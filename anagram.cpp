#include <iostream>
#include <string>
#include <vector>

using namespace std;

void anagram(string s,string t){
    vector <int> freq(26,0);
    for(int i=0;i<s.length();i++){
        int index=s[i]-'a';
        freq[index]++;
    }
    
    for(int i=0;i<s.length();i++){
        int index=t[i]-'a';
        freq[index]--;
    }
    
    for(int i=0;i<freq.size();i++){
        if(freq[i]!=0){
            cout<<"No"<<endl;
            return;
        }
    } 
      
    cout<<"Yes"<<endl;
    return;

}

int main(){
    string s,t;
    cin>>s>>t;

    anagram(s,t);

    return 0;
}
