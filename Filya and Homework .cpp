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
    set<int>s;
    int n,x;
    sf1(n);
    FOR(i,n) {  sf1(x); s.insert(x);}
    if(s.size()>3) { pf("NO\n"); return 0;}
    if(s.size()==3){
        int a[4],m=0;
        for(set<int>::iterator it=s.begin(); it!=s.end();it++)
            a[m++]=*it;
        sort(a,a+3);
        if(a[0]+a[2]==2*a[1]) pf("YES\n");
        else pf("NO\n");
    }
    else pf("YES\n");
    return 0;
}
