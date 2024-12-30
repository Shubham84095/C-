#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Machine {
    int A, P, B, Q;  // A_i, P_i, B_i, Q_i
};

// Function to check if we can achieve at least W_target production capacity with budget X
bool canAchieveCapacity(int W_target, const vector<Machine>& machines, int N, int X) {
    long long total_cost = 0;
    
    for (int i = 0; i < N; ++i) {
        const Machine& m = machines[i];
        
        // Find minimum cost to achieve at least W_target capacity for process i
        // Using S_i machines: need at least ceil(W_target / A_i) units
        int s_units = ceil((1.0*W_target) / m.A);
        long long cost_s = 1LL * s_units * m.P;
        
        // Using T_i machines: need at least ceil(W_target / B_i) units
        int t_units = ceil((1.0*W_target) / m.B);
        long long cost_t = 1LL * t_units * m.Q;
        
        long long mix_cost1 = (max(s_units - 1, 0)) * m.P + m.Q;
        long long mix_cost2 = (max(t_units - 1, 0)) * m.Q + m.P;
        
        // Add the minimum of all possible costs for this process
        long long a = min(s_units, t_units);
        long long b = min(mix_cost1, mix_cost2);
        total_cost += min(a, b);
        
        // If total cost exceeds the budget, we can't achieve this capacity
        if (total_cost > X) return false;
    }
    
    // If we stayed within budget, it's possible to achieve this capacity
    return total_cost <= X;
}

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<Machine> machines(N);
    for (int i = 0; i < N; ++i) {
        cin >> machines[i].A >> machines[i].P >> machines[i].B >> machines[i].Q;
    }
    
    // Binary search for the maximum W
    int low = 0, high = INT32_MAX;  // Upper bound for W (can process at most 100 products per day)
    int result = 0;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (canAchieveCapacity(mid, machines, N, X)) {
            result = mid;  // mid is feasible, try for a larger capacity
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    // Output the maximum possible production capacity
    cout << result << endl;
    
    return 0;
}
