#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n";
#define bob() cout <<"Bob\n";
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

int findCrIdx(vector <int>& P, vector <int>& T, int n, int m, int& last) {
    int idx = 0;
    while(n >= 0 && m >= 0) {
        if(P[idx] > T[idx]) n--;
        if(P[idx] < T[idx]) m--;
        idx++;
    }

    last = (m == -1);
    return max(0LL, idx-1);
}

void Solution()
{
    int n, m;
    cin >> n >> m;
    int k = (n+m+1);
    vector <int> P(k);
    vector <int> T(k);

    for(auto &i: P) cin >> i;
    for(auto &i: T) cin >> i;

    int last;
    int crIdx = findCrIdx(P, T, n, m, last);

    int sum = 0;
    for(int i = 0; i < crIdx; i++){
        if(P[i] > T[i]){
            sum += P[i];
        }
        else sum += T[i];
    }

    for(int i = crIdx+1; i < k; i++){
        if(last){
            sum += P[i];
        }
        else sum += T[i];
    }

    vector <int> ans(k, 0);
    for(int i = 0; i < k; i++){
        if(i < crIdx){
            if(last){
                if(P[i] > T[i]){
                    ans[i] = sum - P[i] + min(P[crIdx], T[crIdx]);
                }
                else{
                    ans[i] = sum - T[i] + max(P[crIdx], T[crIdx]);
                }
            }
            else{
                if(P[i] > T[i]){
                    ans[i] = sum - P[i] + max(P[crIdx], T[crIdx]);
                }
                else{
                    ans[i] = sum - T[i] + min(P[crIdx], T[crIdx]);
                }
            }
        }
        else if(i == crIdx){
            ans[i] = sum;
        }
        else{
            if(last) ans[i] = sum + min(P[crIdx], T[crIdx]) - P[i];
            else ans[i] = sum + min(P[crIdx], T[crIdx]) - T[i];
        }
    }

    print(ans); cout << endl;

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