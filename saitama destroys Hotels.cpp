#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FORr(i,x)   for(int i=n-1; i>=0;i--)
using namespace std;
int main()
{
    int n,top,fl,t;
    while(sf2(n,top)==2)
    {
        pair<int,int>p[n];
        FOR(i,n) {
            sf2(fl,t);
            p[i]=make_pair(fl,t);
        }
        sort(p,p+n);
        int pre=top,sm=0;
        FORr(i,n){
            sm+=(pre-p[i].first);
            if(p[i].second>sm) sm+=(p[i].second-sm);
            pre=p[i].first;
        }
        pf1(sm+p[0].first);
    }
    return 0;
}
