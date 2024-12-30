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

vector <int> V(1e6+1, 0);
vector <int> S(1e6+1, 0);

void Solution()
{
    int N, M, K;
    cin >> N >> M >> K;

    vector <int> A(N),B(M);
    for(auto& e: A) cin >> e;
    for(auto& e: B) cin >> e;


    for(int i = 0; i < M; i++) V[B[i]]++;
    for(int i = 0; i < M; i++) S[B[i]]++;

    int k = 0, ans = 0;
    for(int i = 0; i < M; i++){
        if(V[A[i]] > 0){
            k++;
        }
        V[A[i]]--;
    }

    ans += (k >= K);

    for(int i = M; i < N; i++){
        int lastEle = A[i-M];
        if(S[lastEle] > 0){
            V[lastEle]++;
            if(V[lastEle] >= 1) k--;
        }
        int curr = A[i];
        if(V[curr] > 0){
            k++;
        }
        V[curr]--;

        ans += (k >= K);
    }

    cout << ans << endl;
    for(int i = 0; i < M; i++){
        S[B[i]] = 0;
        V[B[i]] = 0;
    }
    for(int i = 0; i < N; i++) V[A[i]] = 0;
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