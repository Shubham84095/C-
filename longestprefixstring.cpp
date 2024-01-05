#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string longestprefixstring(vector <string> &str){
    string ans=str[0];
    int ans_length=str[0].size();

    for(int i=1;i<str.size();i++){
        int j=0;
        while(j<str[i].size() && ans.size() && ans[j]==str[i][j] ){
            j++;
        }
            ans_length=min(ans_length,j);

    }

    ans=ans.substr(0,ans_length);

    return ans;


}

int main(){
    int n;
    cout<<"enter the number of string : ";
    cin>>n;
    vector <string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    cout<<"longest common prefix : "<< longestprefixstring(str)<<endl;
    return 0;
}