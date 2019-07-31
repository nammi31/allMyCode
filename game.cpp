#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag[105],a[105],b[105],i,x,y;
    while(cin>>n){
       for(i=1;i<=n;i++)
           flag[i]=0;
       cin>>x;
       for(i=0;i<x;i++){
           cin>>a[i];
           flag[a[i]]=1;
       }
       cin>>y;
       for(i=0;i<y;i++){
        cin>>b[i];
           flag[b[i]]=1;
       }
       for(i=1;i<=n;i++){
          if(flag[i]==0){
            printf("Oh, my keyboard!\n");
            break;
          }
       }
       if(i==n+1) printf("I become the guy.\n");
    }
    return 0;
}
