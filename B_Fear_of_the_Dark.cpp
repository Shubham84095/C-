#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool isLying(int x, int y, int a, int b, double r){
    double dist = sqrt((x-a)*(x-a) + (y-b)*(y-b));
    if((dist - r) < 0.000000001){
        return true;
    }
    return false;
}

double findDistance(int x, int y, int a, int b){
    double distance = sqrt((x-a)*(x-a) + (y-b)*(y-b));
    return distance ;
}

void Solution()
{
    int px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;

    ll distanceSq = (ax-bx)*(ax-bx) + (ay-by)*(ay-by);
    double distance = sqrt(distanceSq)/2.0;

    if(isLying(px, py, ax, ay, distance) || isLying(px,py,bx,by,distance)){
        cout << "case 1\n";
        if(isLying(0, 0, ax, ay, distance) || isLying(0,0,bx,by,distance)){
            cout << "case 1a\n";
            cout << fixed << setprecision(10) << distance << "\n";
        }
        else{
            cout << "case 1b";
            cout << fixed << setprecision(10) << min(findDistance(0,0,ax,ay), findDistance(0,0,bx,by)) << "\n";
        }
    }
    else {
        cout << "case 2\n";
        double dist2 = min(findDistance(px,py,ax,ay),findDistance(px,py,bx,by));
        if(isLying(0, 0, ax, ay, dist2) || isLying(0,0,bx,by,dist2)){
            cout << "case 2a\n";
            cout << fixed << setprecision(10) << dist2 << "\n";
        }
        else{
            cout << "case 2b\n";
            cout << fixed << setprecision(10) << min(findDistance(0,0,ax,ay),findDistance(0,0,bx,by)) << "\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
    {
        Solution();
    }

    return 0;
}    