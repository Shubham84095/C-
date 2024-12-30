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

vector<int> convertToBinary(int number) {
    vector<int> binary;

    while (number > 0) {
        binary.push_back(number % 2);
        number /= 2;
    }

    return binary;
}

void Solution()
{
    int x;
    cin >> x;

    vector <int> s = convertToBinary(x);
    int len = s.size();

    int i = 0;
    for(int j = 0; j < 32; j++){
        for(i = 0; i < len; i++){
            if(s[i] == 1 && (i+1 < len) && (s[i+1] == 1)){
                s[i] = -1;
                i++;
                while(i < len && s[i] != 0){
                    s[i] = 0;
                    i++;
                }
                
                if(i == len){
                    s.insert(s.end(), 1);
                }
                else{
                    s[i] = 1;
                }
            }
        }
    }


    for(int i = 0; i < len-1; i++){
        if(s[i] == 1 && s[i+1] == -1){
            s[i] = -1;
            s[i+1] = 0;
        }
    }

    cout << s.size() << endl;
    print(s);
    cout << endl;
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