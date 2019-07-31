#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x);
#define pf2(x,y)    printf("%d %d\n",x,y)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
using namespace std;
int main()
{
    int n,m,a,b;
    sf2(n,m);
    char found[1003]={0};
    while(m--){
        sf2(a,b);
        found[a]=found[b]=1;
    }
    int start;
    FOR1(i,n) if(!found[i]) { start=i; break;}
    pf1(n-1);
    FOR1(i,n) if(i!=start) pf2(i,start);
    return 0;
}
