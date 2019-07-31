#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n,k;
    while(sf2(n,k)==2)
    {
        int a[n];
        FOR(i,n)   sf1(a[i]);
        int mx=0,ans;
        FOR(i,n-1){
            if(a[i]>a[i+1]){
                ans=a[i]-a[i+1]-k ;
                if(ans>mx)   mx=ans;
            }
        }
        pf1(mx);
    }
    return 0;
}
