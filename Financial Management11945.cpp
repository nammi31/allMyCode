#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j=1;
    cin>>t;
    double a[12],sm,ave;
    while(t--){
        for(i=0;i<12;i++){
            cin>>a[i];
            sm+=a[i];
        }
        ave=sm/12.0;
       if(ave>999.99) printf("%d $%d,%.2lf\n",j++,(int) (ave/1000.0),fmod(ave,1000.0));
       else   printf("%d $%.2lf\n",j++,ave);
    }
    return 0;
}
