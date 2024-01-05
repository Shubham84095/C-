#include <iostream>
#include <vector>

using namespace std;



int main(){

    int year;
    int ones,tens,hundred,thousand;
    cin>>year;

    do{
        year++;
        int temp=year;
        ones=(temp%10);
        temp/=10;
        tens=(temp%10);
        temp/=10;
        hundred=(temp%10);
        temp/=10;
        thousand=(temp%10);
    }
    while(!(ones!=tens && ones!=hundred && ones!=thousand && tens!=hundred && tens!=thousand && thousand!=hundred && year<9999 && year>999));

    cout<<year<<endl;
    return 0;
}