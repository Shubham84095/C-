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
    int n, k;
    cin >> n >> k;

    vector <int> V(n);
    for(auto& e: V) cin >> e;

    sort(all(V));
    for(int i = n-2; i >= 0; i -= 2){
        int inc = V[i+1]-V[i];
        if(k >= inc){
            V[i] = V[i+1];
            k -= inc;
        }
        else{
            V[i] += k;
            break;
        }
    }
    sort(all(V));
    ll sumA = 0, sumB = 0;
    for(int i = n-1; i >= 0; i -= 2){
        sumA += V[i];
        if(i-1 >= 0) sumB += V[i-1];
    }
    cout << abs(sumA-sumB) << endl;
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