#include<bits/stdc++.h>
#define   sf1(x)   scanf("%d",&x)
#define   sf2(x,y) scanf("%d %d",&x,&y)
#define   FOR(i,x) for(int i=0;i<x;i++)
#define   pf1(x)   printf("%d\n",x)
#define   pf2(x,y) printf("%d %d ",x,y)
using namespace std;
int a[100];
int main()
{
    int n,m;
    while(sf2(n,m)==2)
    {
        int hi=0,lw=-1;
        FOR(i,n){ sf1(a[i]); hi+=a[i]; lw=max(a[i],lw);}    //pf2(hi,lw);
        int mid=0,seg;
        pf1(mid);
        while(mid!=lw){
            mid=lw+(hi-lw)/2;   pf1(mid);
            int sm=0; seg=0;
            FOR(i,n){
                sm+=a[i];
                if(sm>mid){ seg++; sm=a[i];}
            }
            seg++;
            if(seg<=m)  hi=mid;
            else lw=mid+1;
        }
       // pf1(mid);
    }
    return 0;
}
