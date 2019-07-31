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
    int n,pos,price,x;
    sf3(n,pos,price);
    int a[105],dis1,dis2;
    FOR1(i,n) sf1(a[i]);
    for(int i=pos+1; i<=n;i++){
        if(a[i]>0 && a[i]<=price){
            dis1=(i-pos)*10;
            break;
        }
    }
    for(int i=pos-1; i>=1;i--){
        if(a[i] && a[i]<=price){
           dis2=(pos-i)*10;
           break;
        }
    }
    pf1(min(dis1,dis2));
    return 0;
}
