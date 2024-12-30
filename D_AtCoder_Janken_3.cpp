#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

int moveBeats(char move) {
    if (move == 'R') return 1; 
    if (move == 'P') return 2; 
    if (move == 'S') return 0; 
}

int corsMove(char move){
    if(move == 'R') return 0;
    if(move == 'P') return 1;
    if(move == 'S') return 2;
}

int solve(string& S, int N, int i, int last, vector <vector <int>>& dp){
    if(i == N) return 0;
    if(dp[i][last] != -1) return dp[i][last];
    int A = 0, B = 0, C = 0;
    int c = moveBeats(S[i]);
    int cors = corsMove(S[i]);
    if(c == last){
        A = solve(S, N, i+1, cors, dp);
    }
    if(c != last){
        B = 1 + solve(S, N, i+1, c, dp);
    }
    if(cors != last){
        C = solve(S, N, i+1, cors, dp);
    }

    return dp[i][last] = max(A, max(B, C));
}


void Solution()
{
    int N;
    string S;
    cin >> N >> S;
    vector <vector <int>> dp(N, vector <int> (4, -1));
    cout << solve(S, N, 0, 3, dp) << endl;
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