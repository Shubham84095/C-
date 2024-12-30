#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int mod = 1e9 + 7;

int main() {
    int64_t t;
    cin >> t;
    while(t--)
    {
        int64_t n;
        cin >> n;
        if(n == 1)
        {
            cout << n << "\n";
        }
        else
        {
            int64_t prev2 = 1;
            int64_t prev1 = 2;
            for(int64_t i = 3; i <= n; i++)
            {
                int64_t curr = (prev1 % mod + prev2 % mod) % mod;
                prev2 = prev1 % mod;
                prev1 = curr % mod;
            }
            cout << prev1 % mod << "\n";
        }
    }
    return 0;
}