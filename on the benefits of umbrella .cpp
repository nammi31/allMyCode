#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int g,b,grl[103],boy[103],sm;
    sf2(g,b);
    FOR(i,g)   sf1(grl[i]);
    FOR(i,b)   sf1(boy[i]);
    sort(grl,grl+g,greater<int>());
    sort(boy,boy+b, greater<int>());
    int lucky=min(g,b); int mn=INT_MAX;
    for(int c=0;c<=lucky;c++)   //choose
    {
        sm=0;
        for(int i=c;i<g; i++) sm+=grl[i];
        for(int i=c; i<b; i++) sm+=(c*boy[i]);
        if(sm<=mn)  mn=sm;

    }
    pf1(mn);
    return 0;
}
