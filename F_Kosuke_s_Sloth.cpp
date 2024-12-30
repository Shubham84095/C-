#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

// Function to find G(n, k)
long long G(long long n, long long k) {
    std::vector<long long> fib_mod_k; // To store Fibonacci numbers modulo k
    long long a = 1, b = 1;
    
    // Store the first Fibonacci numbers modulo k
    fib_mod_k.push_back(a);
    fib_mod_k.push_back(b);
    
    // Find the Pisano period for Fibonacci numbers modulo k
    long long period_length = 0;
    bool period_found = false;
    
    while (!period_found) {
        long long c = (a + b) % k;
        fib_mod_k.push_back(c);
        a = b;
        b = c;

        // Check for the start of the period (1, 1)
        if (c == 1 && a == 1) {
            period_length = fib_mod_k.size() - 2; // Exclude the last two 1s
            period_found = true;
        }
    }
    
    // Count the Fibonacci numbers divisible by k in one complete period
    std::vector<long long> indices; // To store indices of Fibonacci numbers divisible by k
    for (long long i = 0; i < fib_mod_k.size() - 2; i++) { // Ignore the last two 1s
        if (fib_mod_k[i] % k == 0) {
            indices.push_back(i + 1); // Store the index (1-based)
        }
    }
    
    // If no Fibonacci numbers are divisible by k, return -1
    if (indices.empty()) return -1;
    
    // Calculate the total number of complete periods
    long long complete_periods = (n - 1) / indices.size();
    long long remainder = (n - 1) % indices.size();
    
    // Calculate the result using the index of the n-th divisible Fibonacci number
    long long result = (complete_periods * period_length * indices.size() + indices[remainder]) % MOD;
    
    return result;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long n, k;
        std::cin >> n >> k;
        std::cout << G(n, k) << std::endl;
    }
    return 0;
}
