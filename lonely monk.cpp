/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%lld\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n;
    sf1(n);
    int a[n];
    long long total=0,ans=0,sm;
    FOR(i,n)   sf1(a[i]);
    FOR(i,n){
       total+= a[i];
       if(total%2==0)   ans++;
       sm=total;
       FOR(j,i){
           sm-=a[j];
           if(sm%2==0) ans++;
       }
    }
    pf1(ans);
    return 0;
}*/
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%lld\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<x;i++)
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    int n;
    sf1(n);
    int a[n],subarry[n];
    FOR(i,n)  sf1(a[i]);
    mem(subarry,0);
    if(a[0]%2==0) subarry[0]=1;
    long long ans=subarry[0];
    FOR1(i,n){
        if(a[i]%2==0)  subarry[i]=subarry[i-1]+1;
        else     subarry[i]=i-subarry[i-1];
        ans+=subarry[i];
    }
    pf1(ans);
    return 0;
}*/
    ///Jarvis and Seven Segments
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int bulbs[10]={6,2,5,5,4,5,6,3,7,6};
    int t,n,x;
    sf1(t);
    while(t--)
    {
        sf1(n);
        int mn=INT_MAX,ans;
        while(n--){
            sf1(x);
            int a=x,sm=0;
            if(a==0) sm=6;
            while(a){
              sm+=bulbs[a%10] ;
              a/=10;
            }
            if(sm<mn){ mn=sm;  ans=x;}
        }
        pf1(ans);
    }
    return 0;
}*/
   ///The Great Kian
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf3(x,y,z)  printf("%lld %lld %lld\n",x,y,z)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
using namespace std;
int main()
{
    int n;
    sf1(n);
    int a[n];
    long long sm1=0,sm2=0,sm3=0;
    FOR1(i,n){
        sf1(a[i]);
        if(i%3==1)  sm1+=a[i];
        else if(i%3==2) sm2+=a[i];
        else sm3+=a[i];
    }
    pf3(sm1,sm2,sm3);
    return 0;
}*/
  ///Digit Problem
/*#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%s %d",x,&y)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    char s[21];
    int k;
    sf2(s,k);
    for(int i=0,j=0; (j<k && s[i]); i++)
        if(s[i]<'9') { s[i]='9'; j++; }
    pfs(s);
    return 0;
}*/

