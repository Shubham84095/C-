#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V) for(auto &e : V) cout << e << " ";
#define all(V) V.begin(), V.end()
#define int long long int
#define endl '\n'
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define alice() cout <<"Alice\n"
#define bob() cout <<"Bob\n"
#define pb push_back
#define mp make_pair
#define Vll(V,n,m) vector<vector<int> > V(n,vector<int>(m))
using namespace std;
typedef long long ll;
ll re = ~0;

class SegTree{
    vector<int> seg;
public:
    SegTree(int n){
        seg.resize(4*n+1, re);
    }

    void build(int ind, int low, int high, vector<int>& arr){
        if (low == high) {
            assert(low < arr.size());
            seg[ind] = arr[low];
            return;
        }

        int mid = (low + high) / 2;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1, high, arr);
        seg[ind] = (seg[2 * ind + 1] & seg[2 * ind + 2]);
    }

    int query(int ind, int low, int high, int l, int r){
        if(r < low || high < l) return re; // Outside range
        if(l <= low && high <= r) return seg[ind]; // Complete overlap
        int mid = (low + high) / 2;
        int left = query(2*ind + 1, low, mid, l, r);
        int right = query(2*ind + 2, mid + 1, high, l, r);
        return (left & right); // Partial overlap
    }
};

void Solution() {
    int n;
    cin >> n;
    vector<int> V(n);
    for(auto& i : V) cin >> i;

    SegTree S(n);
    S.build(0, 0, n-1 , V);

    int q;
    cin >> q;
    while(q--) {
        int l, k;
        cin >> l >> k;
        l--;

        int ll = l;
        int r = n - 1;
        int answer = -1;

        while(l <= r){
            int mid = (l + r) / 2;
            int ele = S.query(0, 0, n - 1, ll, mid);
            if(ele >= k){
                answer = mid + 1;
                l = mid +1;
            } else {
                r = mid - 1;
            }
        }

        cout << answer << " ";
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        Solution();
    }

    return 0;
}
