#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,a[10005],x[10005],i,j,k=1;
    while(cin>>n>>q && (n|q)){
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        printf("CASE# %d:\n",k++);
        int p;
        for(j=0;j<q;j++){
              cin>>x[j];
              char found = 0;
            for(i=0;i<n;i++){
              if(x[j]==a[i]){
                   found=1;
                   p=i+1;
                   break;
              }
            }
            if(found) printf("%d found at %d\n",x[j],p);
            else printf("%d not found\n",x[j]);
          }
    }
    return 0;
}
