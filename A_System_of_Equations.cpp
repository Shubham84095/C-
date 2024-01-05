#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;

    int count=0;

    int temp=max(n,m);
    for(int i=0;i<=temp;i++){
        for(int j=0;j<=temp;j++){
            if((i*i+j==n) && (i+j*j==m)){
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}