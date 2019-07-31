/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
using namespace std;
int main()
{
    int n,mx=0;
    sf1(n);
    int a[n],cnt[n],b[n];
    FOR(i,n)  {
        sf1(a[i]);
        if(a[i]>mx)  mx=a[i];
    }
      FOR(i,mx)  cnt[i]=0;
      FOR1(j,n) cnt[a[j]]+=1;
      FOR1(i,mx) cnt[i]+=cnt[i-1];

      for(int j=n-1; j>=0; j--){
              b[cnt[a[j]]]=a[j];
              cnt[a[j]]-=1;
       }
  //  printf("The Sorted array is : ");
     FOR(i,n)
        printf("%d ", b[i]);

     // FOR(i,n-1)  pf1s(a[i]);
     // pf1(a[n-1]);
    return 0;
}*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<=x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
using namespace std;
int n,mx;
int main()
{
    mx = 0;
    sf1(n);
    int a[n];
    FOR(i,n){  sf1(a[i]);
        if (a[i]> mx) mx = a[i];
    }
    int i, j;
    int b[15], cnt[100];
    FOR(i,mx)  cnt[i] = 0;
    FOR1(j,n)  cnt[a[j]]+=1;
    FOR1(i,mx) cnt[i]+=cnt[i-1];
    FORr(j,n)
    {
        b[cnt[a[j]]] = a[j];
        cnt[a[j]]-=1;
    }
    FOR1(i,n)  pf1s(b[i]);
    printf("\n");
    return 0;
}
