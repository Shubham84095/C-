#include <bits/stdc++.h>
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

using namespace std;
//typedef long long ll;
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

void Solution()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    string problems = "ABCDE";
    vector<int> scores = {a, b, c, d, e};

    vector<pair<string, int>> P;

    for (int mask = 1; mask < (1 << 5); ++mask) { 
        string name = "";
        int totalScore = 0;
        for (int i = 0; i < 5; ++i) {
            if (mask & (1 << i)) {
                name += problems[i];
                totalScore += scores[i];
            }
        }
        P.push_back({name, totalScore});
    }

    sort(all(P), [](pair<string, int>& p1, pair<string, int>& p2) {
        if (p1.second != p2.second)
            return p1.second > p2.second; 
        return p1.first < p2.first;   
    });

    for (auto& e : P) {
        cout << e.first << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; 
    // cin >> t; 
    while (t--) 
    {
        Solution();
    }

    return 0;
}
