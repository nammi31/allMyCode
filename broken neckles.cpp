#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %s",&x,y)
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
    int ln,mx=0;
    char s[353];
    sf2(ln,s);
    for(int i=0; i<ln; i++){
          int j=i,k=i+1, cnt=0;
          while(s[i]==s[j] || s[j]=='w'){
            cnt++;
            j--;
            if(j<0) j=ln-1;
            if(j==i) break;
            }
          while(s[i+1]==s[k] || s[k]=='w'){
            cnt++;
            k++;
            if(k==ln) k=0;
            if(k==i+1) break;
          }
          if(cnt>mx) mx=cnt;
        }
    pf1(mx);
    return 0;
}
/*
16
rrrrrrrwwbbbbrbr
*/
