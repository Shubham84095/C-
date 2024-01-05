#include <bits/stdc++.h>
using namespace std;

struct tram
{
    int entry[2];
};

int main()
{
    int n, capacity = 0, sum = 0;
    cin >> n;

    tram A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i].entry[0] >> A[i].entry[1];
    }

    for (int i = 0; i < n; i++)
    {
        sum -= A[i].entry[0];
        if (sum > capacity)
        {
            capacity = sum;
        }
        sum += A[i].entry[1];
        if (sum > capacity)
        {
            capacity = sum;
        }
    }

    cout << capacity;

    return 0;
}