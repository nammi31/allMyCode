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
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int n;
char a[1005][1005];
int main()
{
    int n;
    sf1(n);
    FOR(i,n)
       FOR(j,n)
          a[i][j]=' ';
    for(int j=0;j<n; j++) a[0][j]='.';
    for(int j=0;j<n; j++) a[n-1][j]='.';

    for(int i=0; i<n; i++) a[i][0]='.';
    FOR(i,n){
        FOR(j,n) cout<<a[i][j];
        cout<<endl;
    }
    for(int i=1; i<n-1; i++) a[i][0]=' ';
    a[n/2][n/2]='.';
    FOR(i,n){
        FOR(j,n) cout<<a[i][j];
        cout<<endl;
    }
    for(int i=1; i<n-1; i++) a[i][0]='.';
    FOR(i+1,n-1)
       FOR(j,n-1)  a[i][j]='.';
    FOR(i,n){
        FOR(j,n) cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}
