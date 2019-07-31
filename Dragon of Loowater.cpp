#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    int n,m;
    while(sf2(n,m)==2 && (n|m))
    {
        int dia[n],h[m],taken[m];
        FOR(i,n)  sf1(dia[i]);   sort(dia,dia+n);
        FOR(i,m)  sf1(h[i]);     sort(h,h+m);
        mem(taken,0);
        int coin=0,die=0;
        FOR(i,n){
            FOR(j,m){
                if( !taken[j] && h[j]>=dia[i]){
                    taken[j]=1; die++;
                    coin+=h[j];
                    break;
                }
            }
        }
        if(die==n)  pf1(coin);
        else pf("Loowater is doomed!\n");
    }
    return 0;
}
