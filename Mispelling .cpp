#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %s",&x,y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d ",x)
#define pfs(x)     printf("%s\n",x)
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
    char s[85],k=1;
    int t,pos;
    sf1(t);
    while(t--){
        sf2(pos,s);
        string ans="";
        for(int i=0,j=0; s[i]; i++){
            if(i+1!=pos) ans+=s[i];
        }
        pf1(k++);
        cout<<ans<<endl;

    }
    return 0;
}
/*
4
4 MISSPELL
1 PROGRAMMING
7 CONTEST
3 BALLOON
*/
