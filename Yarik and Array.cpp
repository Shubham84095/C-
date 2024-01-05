#include <bits/stdc++.h>
using namespace std;

inline bool IsSameParity(int *a, int *b)
{
    if ((*a - *b) % 2)
    {
        return true;
    }

    return false;
}

inline int sum(int* i, int* j)
{
    int sum = 0;
    while(i <= j){
        sum += *i;
        i++;
    }

    return sum;
}

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solution()
{
    int n;
    cin >> n;

    vector<int> V(n);

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    int max_sum = V[0];

    int *ptr_1 = &V[0];
    int *ptr_2 = &V[1];

    int i = 0, j = 0, temp_sum = 0;

    while (ptr_2 <= &V[n - 1])
    {
        if (!IsSameParity(ptr_2-1, ptr_2))
        {
            ptr_2++;
            temp_sum = sum(ptr_1, ptr_2);

            if( temp_sum > max_sum)
            {
                max_sum = temp_sum;
            }

        }
    }
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