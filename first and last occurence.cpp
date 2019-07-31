#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FORr(i,x)   for(int i=n-1; i>=0;i--)
using namespace std;
int main()
{
    int n,a[10007],x;
    while(sf1(n)==1)
    {
        FOR(i,n)  sf1(a[i]);
        sf1(x);
        int p1,p2;
        FOR(i,n) {
            if(a[i]==x) { p1=i+1; break;}
        }
        FORr(i,n){
            if(a[i]==x) {p2=i+1;  break;}
        }
        pf2(p1,p2);
    }
    return 0;
}
