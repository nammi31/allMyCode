/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FORr(i,x)   for(int i=n-1; i>=0;i--)
using namespace std;
int main()
{
    int n;
    sf1(n);
    int a[n];
    FOR(i,n)  sf1(a[i]);
    FORr(i,n) pf1(a[i]);
    return 0;
}*/
  ///Micro and Array Update
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int t,n,x;
    sf1(t);
    while(t--)
    {
        sf2(n,x);
        int a,mn=INT_MAX,ans=0;
        while(n--){
            sf1(a);
            if(a<mn) mn=a;
        }
        if(mn<x) ans=x-mn;
        pf1(ans);
    }
    return 0;
}*/
  ///Binary Queries
 /*#include<bits/stdc++.h>
 #define sf1(x)      scanf("%d",&x)
 #define sf2(x,y)    scanf("%d %d",&x,&y)
 #define pfs(x)      printf("%s\n",x)
 #define FOR1(i,x)   for(int i=1;i<=x;i++)
  using namespace std;
 int main()
 {
     int n,q,m,pos,s,e;
     sf2(n,q);
     int a[n];
     FOR1(i,n) sf1(a[i]);
     while(q--){
        sf1(m);
        if(m)  {sf1(pos); a[pos]^=1;}
        else {
            sf2(s,e);
            pfs((a[e]&1)?"ODD":"EVEN");
        }
     }
     return 0;
 }*/
 ///Monk and Welcome Problem
 /*#include<bits/stdc++.h>
 #define sf1(x)      scanf("%d",&x)
 #define pf1(x)      printf("%d\n",x)
 #define pf1s(x)     printf("%d ",x)
 #define FOR(i,x)    for(int i=0;i<x;i++)
 using namespace std;
 int main()
 {
     int n;
     sf1(n);
     int a[n],b[n],c[n];
     FOR(i,n)  sf1(a[i]);
     FOR(i,n){
         sf1(b[i]);
         c[i]=a[i]+b[i];
     }
     FOR(i,n-1) pf1s(c[i]);
     pf1(c[n-1]);
     return 0;
 }*/
 ///Modify Sequence
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<x;i++)
using namespace std;
int main()
{
    int n;
    sf1(n);
    int a[n];
    FOR(i,n) sf1(a[i]);
    FOR1(i,n){
        if(a[i]>=a[i-1]) a[i]=(a[i]-a[i-1]);
        else { pfs("NO"); return 0;}
    }
    pfs((a[n-1])?"NO":"YES");
    return 0;
}*/
///Long ATM Queue
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<x;i++)
using namespace std;
int main()
{
    int n;
    sf1(n);
    int h[n];
    FOR(i,n)  sf1(h[i]);
    int group=1;
    FOR1(i,n)  if(h[i]<h[i-1]) group++;
    pf1(group);
    return 0;
}*/
///Monk and Lucky Minimum
/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    int t,n;
    sf1(t);
    while(t--)
    {
        sf1(n);
        int x,mn=INT_MAX,cnt;
        while(n--){
           sf1(x);
           if(x<mn){ mn=x;  cnt=1;}
           else if(x==mn) cnt++;
        }
        pfs((cnt&1)?"Lucky":"Unlucky");
    }
    return 0;
}*/
