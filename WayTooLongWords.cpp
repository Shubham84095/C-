#include <bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solution()
{
    string A;
    cin >> A;
    if (A.length() < 11)
    {
        for (int i = 0; i < A.length(); i++)
        {
            cout << A[i];
        }
        cout << "\n";
        return ;
    }

    int count;
    count = A.length() - 2;
    cout << A[0] << count << A[A.length() - 1] << "\n";
    return;
}

int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Solution();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.";
    return 0;
}