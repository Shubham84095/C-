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
    int n;
    cin >> n;

    vector<int> V(n);
    for (auto& e : V) cin >> e;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        A[i] = V[i];  
    }
    sort(A.begin(), A.end());  

    deque<int> S(A.begin(), A.end());  
    int cnt = 0;

    while (S.size() > 1) {
        if (cnt & 1) {
            S.pop_back();  
        } else {
            S.pop_front();  
        }
        cnt++;
    }

    cout << S.back() << endl;
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