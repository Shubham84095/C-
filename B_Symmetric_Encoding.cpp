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

string constructAuxiliaryString(const string& s) {
    set<char> distinctLetters;
    for (char c : s) {
        distinctLetters.insert(c);
    }
    
    string r(distinctLetters.begin(), distinctLetters.end());
    return r;
}

void Solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n == 1){
        cout << s << endl;
        return;
    }

    string r = constructAuxiliaryString(s);
    // cout << r << endl;
    int len = r.length();

    map<char,char> mp;
    int i = 0;
    int j = len-1;
    while(i <= j){
        mp[r[i]] = r[j];
        mp[r[j]] = r[i];
        i++;
        j--;
    }

    for(int k = 0; k < n; k++){
        s[k] = mp[s[k]];
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