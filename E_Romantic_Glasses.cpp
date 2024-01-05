#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define incSort(V) sort(V.begin(), V.end())
#define decSort(V) sort(V.begin(), V.end(), greater<int>())
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;
    vector <ll> glass(n), oddGlass(n), evenGlass(n);
    ll sumOdd = 0, sumEven = 0;
    set <ll> V;
    bool checkEqual = false;

    for(int i = 0; i < n; i++){
        cin >> glass[i];
        if(i && glass[i] == glass[i-1]) {
            checkEqual = true;
        }
    }

    for(int i = 0; i < n; i++){
        if(i & 1){
            sumEven += glass[i];
            oddGlass[i] = sumOdd;
            evenGlass[i] = sumEven;
            if(sumOdd == sumEven) checkEqual = true;
        }
        else{
            sumOdd += glass[i];
            oddGlass[i] = sumOdd;
            evenGlass[i] = sumEven;
            if(sumOdd == sumEven) checkEqual = true;
        }
    }

    if(checkEqual){
        cout << "YES\n";
        return;
    }

    for(int i = 0; i < n; i++){
        V.insert(oddGlass[i] - evenGlass[i]);
        if(V.size() != i+1){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}