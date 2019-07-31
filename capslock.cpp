#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pfs(x)      printf("%s\n",x)
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
    char s[103],change=1;
    sfs(s);
 //   if(isupper(s[0]))
         for(int i=1; s[i]; i++)
            if(islower(s[i]))  change=0;
  /*  else{
        for(int i=1; s[i]; i++)
            if(islower(s[i]))  change=1;

    }*/
    if(change==0){
        for(int i=0; s[i]; i++){
            if(isupper(s[i])) s[i]=tolower(s[i]);
            else s[i]=toupper(s[i]);
        }
        pf("\n");
    }
    else pfs(s);
    return 0;
}
