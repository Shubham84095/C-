#include <iostream>
#include <vector>
#include <map>
#define MOD 1000000007

using namespace std;

// Segment Tree class to handle range queries
class SegmentTree {
    int n;
    vector<map<int, int>> tree;

public:
    SegmentTree(int size) : n(size), tree(4 * size) {}

    void update(int idx, int start, int end, int pos, int value) {
        if (start == end) {
            tree[idx][value]++;
        } else {
            int mid = (start + end) / 2;
            if (pos <= mid)
                update(2 * idx + 1, start, mid, pos, value);
            else
                update(2 * idx + 2, mid + 1, end, pos, value);
            tree[idx][value] = tree[2 * idx + 1][value] + tree[2 * idx + 2][value];
        }
    }

    int query(int idx, int start, int end, int l, int r, int value) {
        if (r < start || l > end)
            return 0;
        if (l <= start && end <= r)
            return tree[idx][value];
        int mid = (start + end) / 2;
        return query(2 * idx + 1, start, mid, l, r, value) + query(2 * idx + 2, mid + 1, end, l, r, value);
    }

    void update(int pos, int value) {
        update(0, 0, n - 1, pos, value);
    }

    int query(int l, int r, int value) {
        return query(0, 0, n - 1, l, r, value);
    }
};

int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> prefix(n + 1, 0);

    // Calculate prefix sums
    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + (s[i] == '1' ? 1 : -1);
    }

    // Initialize Segment Tree
    SegmentTree segTree(n + 1);
    segTree.update(0, 0); // Initial condition: prefix sum 0 at position 0

    long long total = 0;
    for (int i = 1; i <= n; ++i) {
        // Query the number of prefix sums equal to the current prefix sum
        total = (total + segTree.query(0, i - 1, prefix[i])) % MOD;
        // Update the segment tree with the current prefix sum
        segTree.update(i, prefix[i]);
    }

    cout << total << endl;
    return 0;
}
