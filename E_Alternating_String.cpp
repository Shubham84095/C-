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
    string s;
    cin >> s;
    if(n == 1) {
        cout << "1\n";
        return;
    }
    vector <int> A(26, 0);
    vector <int> B(26, 0);

    for(int i = 0; i < n; i++){
        if(i & 1) B[s[i]-'a']++;
        else A[s[i]-'a']++;
    }

    int mxA = *max_element(all(A));
    int mxB = *max_element(all(B));

    if(n&1){
        vector<int> odd_counts(26, 0), even_counts(26, 0);
        vector<int> best_even(26, 0), best_odd(26, 0);

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                even_counts[s[i] - 'a']++;
                best_even[s[i] - 'a'] = max(best_even[s[i] - 'a'], even_counts[s[i] - 'a']);
            } else {
                odd_counts[s[i] - 'a']++;
                best_odd[s[i] - 'a'] = max(best_odd[s[i] - 'a'], odd_counts[s[i] - 'a']);
            }
        }

        int min_delete_ops = n; // Start with a large number

        for (char c = 'a'; c <= 'z'; ++c) {
            int freq_odd = best_odd[c - 'a'];
            int freq_even = best_even[c - 'a'];
            int ops = ((n/2) - freq_even) + ((n+1)/2 - freq_odd);
            min_delete_ops = min(min_delete_ops, ops);
        }

        cout << min_delete_ops << endl;
    }
    else{
        cout << (n/2 - mxA) + (n/2 -mxB) << endl;
    }
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