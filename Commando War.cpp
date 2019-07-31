#include<bits/stdc++.h>
#define  sf1(x)      scanf("%d",&x)
#define  sf2(x,y)    scanf("%d %d",&x,&y)
#define  pcase(x)    printf("Case %d: ",x)
#define  pf1(x)      printf("%d\n",x)
#define  FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
struct person{
    int b;
    int j;
};
bool cmp(person p1,person p2)
{
    return p1.j>p2 .j;
}
int main()
{
    int n,k=1;
    while(sf1(n)==1 && n)
    {
        int sm=0;
        person p[n];
        FOR(i,n) { sf2(p[i].b,p[i].j);  sm+=p[i].b; }
        sort(p,p+n,cmp);
        int rm=0;
        FOR(i,n){
            rm-=p[i].b;
            if(p[i].j>rm) rm=p[i].j;
        }
        pcase(k++);
        pf1(sm+rm);
    }
    return 0;
}
