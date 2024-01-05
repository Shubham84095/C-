#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,m,profit=0;
    cin>>n>>m;

    vector <int> V(n),T;
    for(int i=0;i<V.size();i++){
        cin>>V[i];
        if(V[i]<0){
            T.push_back(V[i]);
        }
    }


    if(T.size()==0){
        cout<<"0";
        return 0;
    }

    if(m>=T.size()){
        for(int i=0;i<T.size();i++){
            profit+=T[i];
        }
        cout<<-1*profit;
        return 0;
    }

    sort(T.begin(),T.end());

    for(int i=0;i<m;i++){
        profit+=T[i];
    }

    cout<<-1*profit;

    return 0;
}