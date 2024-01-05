#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,taxi_count=0,count_1=0,count_2=0,count_3=0,count_4=0;
    cin>>n;

    vector <int> groups(n);

    for(int i=0;i<groups.size();i++){
        cin>>groups[i];
        if(groups[i]==1) count_1++;
        if(groups[i]==2) count_2++;
        if(groups[i]==3) count_3++;
        if(groups[i]==4) count_4++;
    }


    int count1_3=min(count_1,count_3);

    if(count_3>=count_1){
        if(count_2%2){
            cout<<count_4+count_3+((count_2/2)+1)+count_1-count1_3;
        }
        else{
            cout<<count_4+count_3+(count_2/2)+count_1-count1_3;
        }
    }

    if(count_3<count_1){
        int diff=count_1-count_3;

        if(count_2%2){
           if((diff-2)%4){
            if((diff-2)>0){
            cout<<count_4+count_3+((count_2/2)+1)+(((diff-2)/4)+1);
            }

            else{
                cout<<count_4+count_3+((count_2/2)+1)+(((diff-2)/4));
            }
           }
           else{
            cout<<count_4+count_3+((count_2/2)+1)+(((diff-2)/4));
           }
        }
        else{
            if(diff%4){
                cout<<count_4+count_3+(count_2/2)+((diff/4)+1);
            }
            else{
                cout<<count_4+count_3+(count_2/2)+(diff/4);
            }
        }
    }


    return 0;
}