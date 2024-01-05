#include <bits/stdc++.h>
using namespace std;

void Solution()
{
    int n, k, temp;
    cin >> n >> k;

    vector <int> V;

    for(int i = 0; i < n; i++){
        cin >> temp;
        V.push_back(temp);
    }

    for(int i = k; i < n; i++){
        if(!(V[i-1] == V[i])){
            cout << "-1\n";
            return ;
        }
    }
    int idx = -1;
    for(int i = 0; i < k-1; i++){
        if(V[i] != V[k-1]) idx = i;
    }

    if(idx == -1){
        cout << "0\n";
    }
    else{
        cout << idx+1 << "\n";
    }

}

int32_t main()
{
    Solution();

    return 0;
}