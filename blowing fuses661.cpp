#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,t=1;
    while(cin>>n>>m>>c && (n|m|c)){
        int i,j,a[22],x;
        for(i=1;i<=n;i++)
            cin>>a[i];
        int cnt[22]={0},sum=0,fuse=0,mx=0;
        for(j=1;j<=m;j++){
            cin>>x;
            for(i=1;i<=n;i++){
              if(x==i){
                 cnt[i]++;
                 if(cnt[i]%2)  sum+=a[i];
                 else sum-=a[i];
                 if(sum>c) fuse=1;
                 if(sum>mx) mx=sum;
              }
            }
         }
         cout<<"Sequence "<<t++<<endl;
         if(fuse) cout<<"Fuse was blown.\n\n";
         else{
            cout<<"Fuse was not blown.\n";
            printf("Maximal power consumption was %d amperes.\n\n",mx);
         }
    }
    return 0;
}
