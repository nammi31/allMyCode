#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[10003],i,j;
    while(cin>>n){
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        sort(a,a+n);
        int diff,mn=99999999,p,q;
        for(i=0;i<n-1;i++){
           for(j=1;j<n;j++){
             if(a[i]+a[j]==m){
                diff=a[j]-a[i];
                if(diff<mn){
                   mn=diff;
                   p=a[i];
                   q=a[j];
                }
             }
           }
        }
        printf("Peter should buy books whose prices are %d and %d.\n",p,q);
    }
    return 0;
}
