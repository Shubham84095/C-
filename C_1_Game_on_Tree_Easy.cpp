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

int cntDistance(int start, map <int, list<int>>& adj, map <int, bool>& backTrack){
    int dist = 1;
    backTrack[start] = true;
    queue <int> q;
    for(auto &i : adj[start]) if(!backTrack[i]) q.push(i);

    while(!q.empty()){
        int next = q.front();
        if(backTrack[next]){
            q.pop();
        }
        else{
            backTrack[next] = true;
            // cout << "next -> " << next << endl;
            dist++;
            for(auto &i: adj[next]){
                if(!backTrack[i]) q.push(i);
            } 
            q.pop();
        }
    }

    return dist;
}

void Solution()
{
    int n, t;
    cin >> n >> t;
    map <int, list<int>> adj;

    for(int i = 0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int distBack = 0;
    int distForw = 0;
    map <int, bool> backTrack;
    int active;
    cin >> active;
    backTrack[active] = true;

    queue <int> q;
    for(auto &i : adj[active]) q.push(i);

    distForw = cntDistance(q.front(), adj, backTrack);
    q.pop();
    if(!q.empty()){
        distBack =cntDistance(q.front(), adj, backTrack);
    }

    if((distBack & 1) || (distForw & 1)) cout << "Ron\n";
    else cout << "Hermione\n";

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}