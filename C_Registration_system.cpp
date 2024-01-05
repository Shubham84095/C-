#include <bits/stdc++.h>
using namespace std;

struct database{
    string name;
};

int main()
{
    int n;
    cin>>n;
    vector <database> person(n);

    for(int i=0;i<n;i++){
        cin>>person[i].name;
    }

    for(int i=0;i<person.size();i++){
        int idx=1;
        for(int j=i+1;j<person.size();j++){
            if(person[i].name==person[j].name){
                person[j].name.append(to_string(idx++));
            }
        }
    }

    for(int i=0;i<person.size();i++){
        if(!(person[i].name[person[i].name.size()-1]>='0' && 
        person[i].name[person[i].name.size()-1]<='9')){
            cout<<"OK\n";
        }
        else{
            for (int j = 0; j < person[i].name.size(); j++) {
            cout << person[i].name[j];
            }
            cout<<"\n";
        }
    }
    return 0;
}