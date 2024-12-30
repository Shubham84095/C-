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

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    if (n == 1) {
        cout << s << endl;
        return;
    }

    int maxi = 0, mini = INT_MAX;
    for (auto &e : freq) {
        int count = e.second;
        maxi = max(maxi, count);
        mini = min(mini, count);
    }

    char maxChar;
    for (auto &e : freq) {
        char ch = e.first;
        int count = e.second;
        if (count == maxi) {
            maxChar = ch;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (maxi == mini && s[i] != maxChar) {
            s[i] = maxChar;
            break;
        } else if (freq[s[i]] == mini && maxi != mini) {
            s[i] = maxChar;
            break;
        }
    }

    cout << s << endl;
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