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

void Solution()
{
    int N, X, Y;
    cin >> N >> X >> Y;

    vector <pair<int, int>> A(N);
    vector <pair<int, int>> B(N);

    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        A[i].first = x;
        B[i].second = x;
    }
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        A[i].second = x;
        B[i].first = x;
    }

    sort(all(A)), sort(all(B));
    reverse(all(A));
    reverse(all(B));

    int mini = N;
    ll sumA = 0;
    ll sumB = 0;
    for(int i = 0; i <N; i++){
        sumA += A[i].first;
        sumB += A[i].second;
        if(sumA > X || sumB > Y){
            mini = min(mini, i+1);
        }
    }

    sumA = 0, sumB = 0;
    for(int i = 0; i <N; i++){
        sumA += B[i].first;
        sumB += B[i].second;
        if(sumA > Y || sumB > X){
            mini = min(mini, i+1);
        }
    }

    cout << mini << endl;
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