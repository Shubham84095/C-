#include <iostream>
#include <vector>

using namespace std;

// Function to compute the total XOR sum using bitwise contributions
long long compute_xor_sum(int N, const vector<int>& A) {
    long long total_sum = 0;
    
    // Iterate over each bit position
    for (int bit = 0; bit < 30; ++bit) { // Up to 30 bits for values up to 10^8
        long long count = 0;
        long long current_bit_mask = 1 << bit;

        // Count the number of subarrays where this bit contributes
        long long current_sum = 0;
        long long prefix_xor = 0;
        
        for (int i = 0; i < N; ++i) {
            prefix_xor ^= A[i];
            if (prefix_xor & current_bit_mask) {
                count += (i + 1);
            }
            current_sum += count;
        }
        
        // Each bit position contributes to the final answer
        total_sum += current_sum * current_bit_mask;
    }
    
    return total_sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << compute_xor_sum(N, A) << "\n";
    return 0;
}
