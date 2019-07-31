/*#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    char s[103];
    sfs(s);
    int cnt[10]={0};
    for(int i=0; s[i]; i++){
        int nm=s[i]-48;
        cnt[nm]++;
    }
    FOR(i,10) pf2(i,cnt[i]);
    return 0;
}*/
   ///Monk and Digital World
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%s%s",x,y)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int ln,i;
    sf1(ln);
    char s1[ln],s2[ln];
    sf2(s1,s2);
              /*sort(s1,s1+ln);         //sorting way   c++   string s1,s2;
                sort(s2,s2+ln);                               cin>>s1>>s2;
               pfs( (!strcmp(s1,s2))? "YES":"NO");            sort(s1.begin(),s1.end());
                                                              sort(s2.begin(),s2.end());
                                                              pfs((s1==s2)? "YES":"NO");*/
    /*int match=ln;
    FOR(i,ln){
        FOR(j,ln)
          if(s1[i]==s2[j]) { s2[j]='0'; match--; break;}
    }
    pfs((match)?"NO":"YES");
    return 0;
} */
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int t,n;
    sf1(t);
    while(t--)
    {
        sf1(n);
        int a[n],b[n],sm1=0,sm2=0;
        FOR(i,n)  { sf1(a[i]); sm1+=a[i];}
        FOR(i,n)  { sf1(b[i]);  sm2+=b[i];}
        pfs((sm1==sm2)? "YES":"NO");
    }
    return 0;
}
