#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(x)      scanf("%s",x)
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<x;i++)
using namespace std;
int main()
{
    int n;
    char s[12];
    while(sf1(n)==1)
    {
        int cnt[100]={0},nm;
        while(n--){
            sf1(nm);
            cnt[nm]++;
            sfs(s);
        }
        pf1s(cnt[0]);
        FOR1(i,100){
            cnt[i]+=cnt[i-1];
            if(i!=99) pf1s(cnt[i]);
        }
        pf1(cnt[99]);
    }
    return 0;
}
