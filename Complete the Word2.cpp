#include <bits/stdc++.h>
#define mem(a,x)    memset(a,x,sizeof(a))
#define sfs(x)      scanf("%s",x)
#define pf          printf
#define pfc(x)      printf("%c",x)
using namespace std;
char s[50003],nice=0;
int found[26];
int main()
{
    sfs(s);
    int ln=strlen(s),j;
    if(ln<26){pf("-1");return 0;}
    for(int i=0;i<ln-25;i++)
    {
        mem(found,0);
        for(j=i;j<i+26;j++){
            if(s[j]!='?') found[s[j]-'A']++;
            if(found[s[j]-'A']>1) break;
        }
        if(j!=i+26) continue;
        nice=1;
        for(int j=i;j<i+26;j++)
            if(s[j]=='?')
                for(int k=0;k<26;k++)
                    if(!found[k])
                    {
                        s[j]='A'+k;
                        found[k]=1;
                        break;
                    }
     }
    if(!nice){ pf("-1"); return 0;}
    for(int i=0;i<ln;i++)
       pfc((s[i]=='?')?'A':s[i]);
    return 0;
}
