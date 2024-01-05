#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string decodedstring(string s){
    string result="";

    for(int i=0;i<s.size();i++){
        //storing the string till first ] brace
        if(s[i]!=']'){
            result.push_back(s[i]);
        }

        else{
            string str="";

            //storing inside braces in reverse order
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }

            //reversing the reverse string str
            reverse(str.begin(),str.end());

            //removing '[' brace
            result.pop_back();

            string num;
            int int_num;
            //storing reverse num string
            while(!result.empty() && result.back()>='0' && result.back()<='9'){
                num.push_back(result.back());
                result.pop_back();
            }

            //reversing the num string
            reverse(num.begin(),num.end());

            //storing num string in int_num
            int_num=stoi(num);

            //adding stored string int_num times
            while(int_num--){
                result+=str;
            }

            
        }
    }
    return result;
}


int main(){

    string s;
    cin>>s;

    cout<<decodedstring(s)<<endl;

    return 0;
}