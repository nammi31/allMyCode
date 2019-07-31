/*
3 6 9
4 4 4
0 0 0
5 7 11
8 11 9
2 8  9
*/
#include<bits/stdc++.h>
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<=x;i++)
using namespace std;
int main()
{
    int r,g,b;
    while(sf3(r,g,b)==3){
      int mn=min(r,min(g,b)),ans=0;
      FOR(i,2)
         if(mn>=i) ans=max(ans,i+(r-i)/3+(g-i)/3+(b-i)/3);
      pf1(ans);
    }
    return 0;
}
