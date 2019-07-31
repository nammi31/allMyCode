#include<bits/stdc++.h>
#define sf2(x,y)      scanf("%d %d",&x,&y)
#define sf3(x,y,z)    scanf("%d %d %d",&x,&y,&z)
#define pf1(x)        printf("%d\n",x)
#define FOR(i,x)      for(int i=0;i<x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define mem(a,x)      memset(a,x,sizeof(a))
using namespace std;
int main()
{
    int n,x,y;
    while(sf3(n,x,y)==3){
        int a[n],b[n],die[n];
        FOR(i,n) sf2(a[i],b[i]);
        mem(die,0);
        int taken=0;
        FOR(i,n){
            if(!die[i]){
                die[i]=1;
                taken++;
                FORL(j,i+1,n)
                  if((a[j]-x)*(y-b[i])==(b[j]-y)*(x-a[i])) die[j]=1;
            }
        }
        pf1(taken);
    }
    return 0;
}
