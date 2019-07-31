#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define pf          printf
#define pfc(x)      printf("%c",x)
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    char s[50003],nice=0;
    sfs(s);
    int ln=strlen(s),found[26];
    if(ln<26) { pf("-1"); return 0;}
    for(int i=0; i<ln-25; i++){
        mem(found,0);
        char fail=0;
        for(int j=i; j<i+26; j++){
            if(s[j]!='?') found[s[j]-65]++;
            if(found[s[j]-65]>1) { fail=1; break; }
        }
        if(fail) continue;
        nice=1;
        for(int j=i; j<i+26; j++)
            if(s[j]=='?')
                for(int k=0; k<26; k++)
                    if(!found[k]){
                        s[j]=k+65;
                        found[k]=1;
                        break;
                    }
    }
    if(!nice) { pf("-1"); return 0;}
    for(int i=0; i<ln; i++)
        pfc((s[i]=='?')?'A':s[i]);
    return 0;
}
/*
ABC??FGHIJK???OPQR?TUVWXY?
??????????????????????????
WELCOMETOCODEFORCESROUNDTHREEHUNDREDANDSEVENTYTWO
*/
