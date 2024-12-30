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
//const int M = 1e9 + 7;
//const int N = 1e7 + 10;

bool poss(vector <int> A, vector <int> B){
    sort(all(A)); sort(all(B));
    return (A == B);
}

class SegmentTree {
    vector<int> tree;
    int n;

public:
    SegmentTree(int size) {
        n = size;
        tree.resize(4 * n, 0);
    }

    void update(int index, int start, int end, int pos, int value) {
        if (start == end) {
            tree[index] += value;
        } else {
            int mid = (start + end) / 2;
            if (pos <= mid) {
                update(2 * index + 1, start, mid, pos, value);
            } else {
                update(2 * index + 2, mid + 1, end, pos, value);
            }
            tree[index] = tree[2 * index + 1] + tree[2 * index + 2];
        }
    }

    int query(int index, int start, int end, int l, int r) {
        if (r < start || l > end) {
            return 0;
        }
        if (l <= start && r >= end) {
            return tree[index];
        }
        int mid = (start + end) / 2;
        return query(2 * index + 1, start, mid, l, r) + query(2 * index + 2, mid + 1, end, l, r);
    }

    void update(int pos, int value) {
        update(0, 0, n - 1, pos, value);
    }

    int query(int l, int r) {
        return query(0, 0, n - 1, l, r);
    }
};

int countInversions(vector<int>& arr) {
    int n = arr.size();

    // Coordinate compression
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < n; ++i) {
        arr[i] = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
    }

    SegmentTree segTree(n);
    int inversions = 0;

    for (int i = n - 1; i >= 0; --i) {
        inversions += segTree.query(0, arr[i] - 1);
        segTree.update(arr[i], 1);
    }

    return inversions;
}

void Solution()
{
    int n;
    cin >> n;
    vector <int> A(n), B(n);
    for(auto& i: A) cin >> i;
    for(auto& i: B) cin >> i;

    if(!poss(A,B)){
        cout << "NO\n";
        return;
    }

    ll invA = countInversions(A);
    ll invB = countInversions(B);

    (invA%2 == invB%2)? yes():no();
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