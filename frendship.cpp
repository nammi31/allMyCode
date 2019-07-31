#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define mem(a,x)   memset(a,x,sizeof(a))
#define FOR(i,x)  for(int i=0;i<x;i++)
#define pf  printf
using namespace std;
int flag[1003][1003];
int main()
{
    int n,m,a,b;
    while(sf2(n,m)==2)
    {
        mem(flag,0);
        FOR(i,m){
            sf2(a,b);
            if(!flag[a][b]){
                pf("new\n");
                flag[a][b]=flag[b][a]=1;
            }
            else pf("old\n");
        }
    }
    return 0;
}
