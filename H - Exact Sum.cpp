#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[10005],sm;
    while(cin>>n){
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>sm;
        sort(a,a+n);
        int dif=10000000,p1,p2;
        for(i=0;i<n-1;i++){
           for(j=i+1;j<n;j++){
             if( (a[i]+a[j]==sm) && (a[j]-a[i]<dif) ){
                p1=a[i];
                p2=a[j];
                dif=a[j]-a[i];
             }
           }
        }
        printf("Peter should buy books whose prices are %d and %d.\n",p1,p2);
    }
    return 0;
}
