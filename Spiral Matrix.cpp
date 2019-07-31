#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    int t,n,i,j;
    sf1(t);
    while(t--){
        sf1(n);
        int a[30][30];
        int x=0,k=0;
        i=1,j=1;
          while(1){
              if(x==n*n) break;
              while(j<n-k) a[i][j++]=++x;
              while(i<n-k) a[i++][j]=++x;
              while(j>1+k) a[i][j--]=++x;
              while(i>1+k) a[i--][j]=++x;
              k++;
           }
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++)
              cout<<a[i][j];
            cout<<endl;
        }

    }
    return 0;
}
