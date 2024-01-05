#include <bits/stdc++.h>
#define ll long long
using namespace std;

inline int reqIdx(vector<ll int> &V)
{
    int t = V.size();

    for (int i = 0; i < t; i++)
    {
        if (V[i])
        {
            return i;
        }
    }

    return -1;
}

inline bool check(vector<ll int> &V, int start)
{
    int t = V.size();

    for (int i = start; i < t; i++)
    {
        if (V[i])
        {
            return true;
        }
    }
    return false;
}

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solution()
{
    int n, tel_count = 0;
    cin >> n;

    vector<ll int> V(n);

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i!=n-1 && V[i] == 0 && check(V, i))
        {
            tel_count++;
            continue;
        }
        if (V[i])
        {
            V[i]--;
        }
        if (i == n - 1)
        {
            i = reqIdx(V);
            if (i == -1)
            {
                break;
            }
            tel_count++;
        }
    }

    cout << tel_count << "\n";
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