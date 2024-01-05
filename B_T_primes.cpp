#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
    if(n == 2 ) return true ;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int main()
{
    int n;
    cin >> n;

    vector <ll> V(n);

    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    ll temp ;
    for(int i = 0; i < n; i++){
        if(V[i] == 1){
            cout << "NO" << endl;
            continue;
        }
        double temp = sqrt(V[i]);
        ll sqr = sqrt(V[i]);
        if(temp - sqr < 0.000001){
            if(isPrime(sqr)){
                cout << "YES" << endl;
                if(V[i+1] == V[i]){
                    cout << "YES" << endl;
                    i += 1;
                }
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}