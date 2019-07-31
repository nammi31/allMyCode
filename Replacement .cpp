#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %c",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %s",&x,&y,z+1)
#define pf1(x)      printf("%d\n",x)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
using namespace std;
char ch,s[300005];
int ln,q,p,cut=0,i;
int main(){
   sf3(ln,q,s);
   FOR1(i,ln)  cut+=(s[i]=='.'&&s[i-1]=='.');
   while(q--){
    sf2(p,ch);
    if (s[p]!='.' && ch=='.')  cut+=(s[p-1]=='.')+(s[p+1]=='.');
    if (s[p]=='.' && ch!='.')  cut-=(s[p-1]=='.')+(s[p+1]=='.');
    s[p]=ch;
    pf1(cut);
   }
   return 0;
}

