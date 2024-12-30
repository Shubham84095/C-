#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// Fenwick Tree class for range sum queries and updates
class FenwickTree {
public:
    int size;
    vector<int> tree;

    FenwickTree(int size) {
        this->size = size;
        tree.resize(size + 1, 0);
    }

    // Update the Fenwick Tree at a specific index
    void update(int index, int delta) {
        while (index <= size) {
            tree[index] += delta;
            index += index & -index;
        }
    }

    // Query the sum from the beginning to a specific index
    int query(int index) {
        int total = 0;
        while (index > 0) {
            total += tree[index];
            index -= index & -index;
        }
        return total;
    }
};

void solve() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;  // Size of the array
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Coordinate compression with a shift to handle negative sums
        const int shift = 100000;  // Shift large enough to map negative sums to positive indices
        FenwickTree fenwick(2 * shift + 1);  // Fenwick Tree size to handle all possible sums
        fenwick.update(shift, 1);  // Initial condition (prefix sum 0 is considered as the starting point)
        
        int prefix_sum = 0;
        set<int> distinct_sums;  // To store distinct subarray sums
        
        // Traverse the array and compute the prefix sums
        for (int i = 0; i < n; ++i) {
            prefix_sum += arr[i];
            
            // Query the Fenwick Tree for subarray sums
            distinct_sums.insert(prefix_sum);  // Add the current prefix sum to the set
            
            // Update Fenwick Tree with the current prefix sum
            fenwick.update(prefix_sum + shift, 1);
        }

        // Prepare the result
        vector<int> result_sums(distinct_sums.begin(), distinct_sums.end());
        cout << result_sums.size() << endl;  // Number of distinct subarray sums
        for (int sum : result_sums) {
            cout << sum << " ";  // Output the distinct sums in ascending order
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);  // For faster input/output
    cin.tie(0);
    
    solve();
    return 0;
}
