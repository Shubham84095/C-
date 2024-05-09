#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4.2")
#define print(V)      \
    for (auto &e : V) \
        cout << e << " ";
#define all(V) V.begin(), V.end()
// #define int long long int
#define endl '\n'
#define yes() cout << "YES" << endl
#define no() cout << "NO" << endl
#define alice() cout << "Alice\n";
#define bob() cout << "Bob\n";
using namespace std;
typedef long long ll;
// const int M = 1e9 + 7;
// const int N = 1e7 + 10;

// EDGE  CASE - 1001 AND ITS PRODUCT WITH BINARYS

void Solution()
{
    int V[16] = {10, 11, 101, 111, 1001, 1011, 1101, 1111, 10001, 10011, 10101, 10111, 11001, 11011, 11101, 11111};
    int n;
    cin >> n;

    while(n % 10 == 0){
        n = n/10;
    }
    if (n == 1)
    {
        yes();
        return;
    }


    int temp = n;

    for (int i = 0; i < 16; i++)
    {
        if (temp % V[i] == 0)
        {
            while (temp % V[i] == 0)
            {
                temp = temp / V[i];
            }
            for (int j = i + 1; j < 16; j++)
            {
                while (temp % V[j] == 0)
                {
                    temp = temp / V[j];
                }
            }
            if (temp == 1)
            {
                yes();
                return;
            }
            else
                temp = n;
        }
    }

    no();
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // t = 1
    cin >> t;
    while (t--)
    {
        Solution();
    }

    return 0;
}