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
#define FORr(i,x)   for(int i=x-1; i>=0;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    int n;
    sf1(n);
    int a[n];
    int ways[105]={0};
    FOR(i,n) { sf1(a[i]); ways[a[i]]++;}
    int cnt=0;
    for(int i=0; i<n; i++){
        if(ways[4-a[i]]){ cnt++; ways[4-a[i]]--; ways[a[i]]--;}
    }
    pf1(cnt);
    //sort(a,a+n);

    /*int cnt=0,sm,j;
    FOR(i,n){
        sm=a[i];
        taken[i]=1;
        for(int j=n-1; j>=i+1; j--){
            if(sm==4) {cnt++; break;}
            if(sm+a[j]<=4) sm+=

        }
        if(j==-1) cnt++;
    }*/
    pf1(cnt);
    return 0;
}
