#include <bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

long long int max_ele(vector<long long int> &V)
{
    long long int max = 0, max_idx = 0;
    for (long long int i = 0; i < V.size(); i++)
    {
        if (V[i] > max)
        {
            max = V[i];
            max_idx = i;
        }
    }

    return max_idx;
}

long long int min_ele(vector<long long int> &V)
{
    long long int min = V[0], min_idx = 0;
    for (long long int i = 1; i < V.size(); i++)
    {
        if (V[i] < min)
        {
            min = V[i];
            min_idx = i;
        }
    }

    return min_idx;
}

void Solution()
{
    long long int n;
    cin >> n;

    vector<long long int> load(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> load[i];
    }

    if (n == 1)
    {
        cout << "0\n";
        return;
    }

    else{

    

    long long int max_diff = 0;

    vector<long long int> factor;
    vector<long long int> dynamic;

    long long int t = n;
    for (long long int i = 1; i <= t / 2; i++)
    {

        if (t % i == 0)
        {
            factor.push_back(i);
        }
    }

    for (long long int i = 0; i < factor.size(); i++)
    {
        dynamic.clear();
        long long int pj= n / factor[i];
        dynamic.resize(pj, 0);
        long long int pre_idx = 0;
        for (long long int jt = 0; jt < dynamic.size(); jt++)
        {
            for (long long int k = 0; k < factor[i]; k++)
            {
                dynamic[jt] += load[pre_idx++];
            }
        }
        long long int temp_min_idx = min_ele(dynamic);
        long long int temp_max_idx = max_ele(dynamic);
        long long int temp_max_diff = fabs(dynamic[temp_max_idx] - dynamic[temp_min_idx]);
        if (temp_max_diff > max_diff)
        {
            max_diff = temp_max_diff;
        }
    }

    cout << max_diff << "\n";
    return;
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