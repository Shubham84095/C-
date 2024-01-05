#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;

    long double sum=0.0,ans;

    vector <long double> A(n);

    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    for(int i=0;i<n;i++){
        sum+=A[i];
    }

    ans=sum/(long double)n;

    cout<<fixed<<setprecision(12)<<ans;

    return 0;
}