#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int main()
{
    int n,i = 0;
    ll Sx,Sy,Ex,Ey;

    cin >> n >> Sx >> Sy >> Ex >> Ey;

    string direction;
    cin >> direction;

    char a , b;
    a = (Ex - Sx >= 0)? 'E' : 'W';
    b = (Ey - Sy >= 0)? 'N' : 'S';

    ll countA = fabs(Ex - Sx), count_a = 0;
    ll countB = fabs(Ey - Sy), count_b = 0;

    while((count_a < countA) || (count_b < countB)){
        if(i == n){
            cout << "-1" << endl;
            return 0;
        }
        if(direction[i] == a && (count_a < countA)){
            count_a++;
        }
        if(direction[i] == b && (count_b < countB)){
            count_b++;
        }
        i++;
    }

    cout << i << endl;

    return 0;
}