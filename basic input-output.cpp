    ///understanding
/*#include<bits/stdc++.h>
#define sf2(x,str)    scanf("%d %s",&x,str)
#define pf2(x,str)    printf("%d\n%s\n",x,str)
using namespace std;
int main()
{
    int n;
    char s[103];
    sf2(n,s);
    pf2(2*n,s);
    return 0;
}*/
   ///Toggle String
/*#include<bits/stdc++.h>
#define sfs(str)    scanf("%s",str)
#define pfs(str)    printf("%s\n",str)
using namespace std;
int main()
{
    char s[103];
    sfs(s);
    for(int i=0;  s[i]; i++)
    {
        if(isupper(s[i]))      s[i]=tolower(s[i]);
        else if(islower(s[i])) s[i]=toupper(s[i]);
    }
    pfs(s);
    return 0;
}*/
   ///Palindromic String
/*#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    char s[103];
    sfs(s);
    int ln=strlen(s),i,j;
    for(i=0,j=ln-1; i<ln/2;i++,j--){
        if(s[i]!=s[j])  i=ln-1;
    }
    pfs((i==ln)? "NO":"YES");
    return 0;
}*/
  ///Find Product
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int n,x,prod=1;
    long long m= 1000000007;
    sf1(n);
    while(n--)
    {
        sf1(x);
        prod=((prod%m)*(x%m))% m;
    }
    pf1(prod);
    return 0;
}*/
   ///Count Divisors
/*#include<bits/stdc++.h>
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int a,b,m;
    sf3(a,b,m);
    if(a>b) swap(a,b);
    int cnt=0,i;
    for(i=a; i<=b;i++)
    {
        if(i%m==0) cnt++;
    }
    pf1(cnt);
    return 0;
}*/
  ///Roy and Profile Picture
/*#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf          printf
using namespace std;
int main()
{
    int L,n;
    sf2(L,n);
    while(n--)
    {
        int W,H;
        sf2(W,H);
        if(W>=L && W==H) pf("ACCEPTED\n");
        else if(W<L || H<L) pf("UPLOAD ANOTHER\n");
        else pf("CROP IT\n");
    }
    return 0;
}*/
 ///factorial!
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR2(i,x)   for(int i=2;i<=x;i++)
using namespace std;
int main()
{
    int n,fact=1;
    sf1(n);
    FOR2(i,n)  fact*=i;
    pf1(fact);
    return 0;
}*/
     ///Life, the Universe, and Everything
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int n;
    char found=0;
    while(sf1(n)==1)
    {
        if(n==42)  found=1;
        if(!found) pf1(n);
    }
    return 0;
}*/
   ///Magical Word
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(x)      scanf("%s",x)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
char is_prime(int n)
{
   if(n<65 || n>122 || (n>90 && n<97) ) return 0;
   for(int j=2;j<n;j++){
        if(n%j==0) return 0;
   }
   return 1;
}
char close_prime(char ch)
{
    if(is_prime(ch))  return ch;
    else{
        for(int i=1;  ;i++){
            if(is_prime(ch-i)) return ch-i;
            if(is_prime(ch+i)) return ch+i;
        }
    }
}
int main()
{
    int t,ln;
    sf1(t);
    while(t--)
    {
        sf1(ln);
        char s[ln];
        sfs(s);
        FOR(i,ln)  s[i]=close_prime(s[i]);
        pfs(s);
    }
    return 0;
}*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(x)      scanf("%s",x)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int p[]={67,71,73,79,83,89,97,101,103,107,109,113};
    int t,ln;
    sf1(t);
    while(t--)
    {
        sf1(ln);
        char s[ln],ch;
        sfs(s);
        FOR(i,ln){
            int mn=INT_MAX;
            FOR(j,12){
                if( abs((int)(s[i])-p[j])< mn){
                    mn=abs((int)(s[i])-p[j]);
                    ch=p[j];
                }
            }
            s[i]=ch;
        }
        pfs(s);
    }
    return 0;
}
