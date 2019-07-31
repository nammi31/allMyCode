#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[10000],i,j;
    while(cin>>n){
        for( i=0; i<n; i++)
            cin>>a[i];
        cin>>m;
        sort(a,a+n);
        int dif=1000001,p1,p2;
        for(i=0; i<n-1; i++){
            for(j=i+1;j<n;j++){
              if( a[i]+a[j]==m && (a[j]-a[i])<dif ){
                p1=a[i],p2=a[j];
                dif=a[j]-a[i];
            }
          }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",p1,p2);
    }
    return 0;
}
