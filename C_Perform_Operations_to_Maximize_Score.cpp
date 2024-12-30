#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<long long> a(n);
        vector<int> b(n);
        vector<long long> ops;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] == 1) {
                ops.push_back(a[i]);
            }
        }
        
        // Sort the values where b[i] = 1 to maximize the usage of operations
        sort(ops.begin(), ops.end());
        
        // Apply operations starting from the largest
        for (int i = ops.size() - 1; i >= 0 && k > 0; i--) {
            ops[i]++;
            k--;
        }
        
        // Now find the best score
        long long best_score = 0;
        for (int i = 0; i < n; i++) {
            vector<long long> c = a;
            c.erase(c.begin() + i);
            nth_element(c.begin(), c.begin() + (c.size() / 2), c.end());
            long long median_c = c[c.size() / 2];
            best_score = max(best_score, a[i] + median_c);
        }
        
        cout << best_score << endl;
    }
    
    return 0;
}
