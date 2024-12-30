#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n"
#define bob() cout <<"Bob\n"
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int n;
    cin >> n;

    set <int> S;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        S.insert(temp);
    }


    auto itr = S.begin();

    if(S.size() == 1){
        alice();
        return;
    }

    if(*itr == 1){

        auto it = S.begin();
        it++;

        int cnt = 0;
        while(it != S.end() && (*it - *itr == 1)){
            cnt++;
            itr++;
            it++;
        }

        if(it == S.end()){
            if(S.size() & 1) alice();
            else bob();
            return;
        }

        if(cnt & 1) alice();
        else bob();
    }
    else alice();
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}