/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(x)      scanf("%s",x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FORL(i,x,y) for(int i=x;i<y;i++)
#define FORr(i,x)   for(int i=n-1; i>=0;i--)
using namespace std;
int main()
{
    int t,n,ln;
    sf1(t);
    while(t--)
    {
        sf2(ln,n);
        char s[ln];
        sfs(s);
        int a[n],b[n];
        FOR(i,n)  sf2(a[i],b[i]);
        FORr(i,n){
            FORL(j,a[i]-1,b[i]){
               if(s[j]=='a') s[j]='z';
               else s[j]=s[j]--;
            }
        }
        pfs(s);
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(x)      scanf("%s",x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define mem(a,x)    memset(a,x,sizeof(a))
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<x;i++)
using namespace std;
int main()
{
    int t,ln,q;
    sf1(t);
    while(t--)
    {
        sf2(ln,q);
        char s[ln];
        sfs(s);
        int shift[ln],a,b;
        mem(shift,0);
        while(q--){
            sf2(a,b);
            shift[a-1]+=-1;
            shift[b]+=1;
        }
        FOR1(i,ln)  shift[i]+=shift[i-1];
        FOR(i,ln){
            shift[i]=(s[i]-'a'+shift[i])%26;
            if(shift[i]<0)   shift[i]+=26;
            s[i]='a'+shift[i];
        }
        pfs(s);
    }
    return 0;
}*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(x)      scanf("%s",x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<x;i++)
using namespace std;
char s[10003];
int shift[10003];
int main()
    {
        int t,a,b,ln,q;
        sf1(t);
        while(t--)
        {
            sf2(ln,q);
            FOR(i,ln) shift[i]=0;
            sfs(s);
            while(q--)
            {
                sf2(a,b);
                shift[a-1]+=-1;
                shift[b]+=1;
            }
            FOR1(i,ln)  shift[i]+=shift[i-1];
            int mv;
            FOR(i,ln)
            {
                mv=(s[i]-'a'+shift[i])%26;
                if(mv<0) mv+=26;
                s[i]='a'+mv;
            }
            pfs(s);
        }
        return 0;
    }
