#include<bits/stdc++.h>
#define sf1(x)       scanf("%d",&x)
#define sf2(x,y)     scanf("%d %d",&x,&y)
#define FOR1(i,x)    for(int i=1;i<=x;i++)
#define pcase(x)     printf("Case %d:\n",x)
#define pf1(x)       printf("%d\n",x)
#define mx           100001
using namespace std;
int n,q,a[mx],nodeval[3*mx];
int build(int s,int e,int v)
{
    if(s==e){
       nodeval[v]=a[e];
       return a[e];
    }
    int mid=(s+e)/2;
    int L=build(s,mid,2*v); int R=build(mid+1,e,2*v+1);
    return nodeval[v]=min(L,R);
}
int searchq(int s,int e,int v,int qs,int qe)
{
    if(qs>e || qe<s)  return INT_MAX;
    if(s>=qs && e<=qe) return nodeval[v];
    int mid=(s+e)/2;
    int p1=searchq(s,mid,2*v,qs,qe); int p2=searchq(mid+1,e,2*v+1,qs,qe);
    return min(p1,p2);
}
int main()
{
    int t,qs,qe,c=1;
    sf1(t);
    while(t--){
       sf2(n,q);
       FOR1(i,n) sf1(a[i]);
       build(1,n,1);
       pcase(c++);
       FOR1(i,q){
           sf2(qs,qe); pf1(searchq(1,n,1,qs,qe));
       }
    }
    return 0;
}
/*#include<bits/stdc++.h>
#define sf1(x)       scanf("%d",&x)
#define sf2(x,y)     scanf("%d %d",&x,&y)
#define FOR1(i,x)    for(int i=1;i<=x;i++)
#define pcase(x)     printf("Case %d:\n",x)
#define pf1(x)       printf("%d\n",x)
#define mx           100001
using namespace std;
int a[mx],nodeval[3*mx];
int build(int s,int e,int v)
{
    if(s==e){
       return nodeval[v]=a[e];
       return a[e];
    }
    int mid=(s+e)/2;
    int L=build(s,mid,2*v);   int R=build(mid+1,e,2*v+1);
    return nodeval[v]=min(L,R);

}
int srch(int s,int e,int v,int qs,int qe)
{
    if(qs>e || qe<s)   return INT_MAX;
    if(qs<=e && qe>=s)   return nodeval[v];
    int mid=(s+e)/2;
    int L=srch(s,mid,2*v,qs,qe);  int R=srch(mid+1,e,2*v+1, qs,qe);
    return  min(L,R);
}
int main()
{
    int t,n,q,qs,qe,k=1;
    sf1(t);
    while(t--)
    {
       sf2(n,q);
       FOR1(i,n) sf1(a[i]);
       build(1,n,1);
       pcase(k++);
       FOR1(i,q) { sf2(qs,qe);  printf("%d",srch(1,n,1,qs,qe));}
    }
    return 0;
}*/
