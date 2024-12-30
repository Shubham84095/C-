#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
typedef long long ll;

void Solution()
{
    int N;
    ll S;
    cin >> N >> S;
    vector <int> A(N);
    ll sum = 0;
    for(auto& e: A){
        cin >> e;
        sum += e;
    }

    S = S%sum;
    if(S == 0){
        cout << "Yes\n";
        return;
    }
    ll l = 0, r = 0, currSum = 0;

    while (r < 2 * N) {
        currSum += A[r % N]; 
        while (currSum > S && l <= r) {
            currSum -= A[l % N]; 
            l++;
        }
        if (currSum == S) {
            cout << "Yes\n";
            return;
        }
        r++;
    }
    cout << "No\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    
    while (t--) 
    {
        Solution();
    }

    return 0;
}
