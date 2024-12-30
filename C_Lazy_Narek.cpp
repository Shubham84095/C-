#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the letter balance for a string
int calculateBalance(const string &s) {
    int count_n = 0, count_a = 0, count_r = 0, count_e = 0, count_k = 0;
    for (char c : s) {
        if (c == 'n') count_n++;
        else if (c == 'a') count_a++;
        else if (c == 'r') count_r++;
        else if (c == 'e') count_e++;
        else if (c == 'k') count_k++;
    }
    // Return the balance value as the number of useful "n" letters
    // minus the occurrences of the other letters.
    return count_n - (count_a + count_r + count_e + count_k);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> strings(n);
        vector<int> balances(n);

        // Read the strings and calculate their balances
        for (int i = 0; i < n; i++) {
            cin >> strings[i];
            balances[i] = calculateBalance(strings[i]);
        }

        // Sort the balances in descending order
        sort(balances.rbegin(), balances.rend());

        // Greedily select the strings with the best balances
        int scoren = 0, scorec = 0;
        int currentBalance = 0;
        for (int balance : balances) {
            if (currentBalance + balance >= 0) {
                currentBalance += balance;
                scoren += 5;  // Each valid sequence contributes 5 points
            } else {
                scorec -= balance;  // The remainder contributes to ChatGPT's score
            }
        }

        // Output the result for this test case
        cout << scoren - scorec << endl;
    }

    return 0;
}
