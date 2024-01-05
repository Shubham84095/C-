#include <bits/stdc++.h>
using namespace std;

bool isAccepted(vector <int>& worms, int mid, int wormLabel){
    if(worms[mid] >= wormLabel){
        return true;
    }
    return false;
}

int pileNum(vector <int>& worms, int n, int wormLabel){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(isAccepted(worms, mid, wormLabel)){
            e = mid - 1;
            ans = mid;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector <int> worms(n);
    for(int i = 0; i < n; i++){
        cin >> worms[i];
        if(i){
            worms[i] += worms[i-1];
        }
    }

    int m;
    cin >> m;

    vector <int> juicyWorms(m);
    for(int i = 0; i < m; i++){
        cin >> juicyWorms[i];
    }

    for(int i = 0; i < m; i++){
        cout << pileNum(worms, n, juicyWorms[i]) + 1 << endl;
    }

    return 0;
}