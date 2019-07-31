/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%lld\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int t,n;
    sf1(t);
    while(t--)
    {
        sf1(n);
        int a[n];
        FOR(i,n)  sf1(a[i]);
        long long ans=0;
        if(n&1){
            for(int i=0;i<n;i+=2)
              ans^=a[i];
        }
        pf1(ans);
    }
    return 0;
}*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%lld\n",x)
#define FOR1(i,x)    for(int i=1;i<=x;i++)
using namespace std;
int main()
{
    int t,n,x;
    sf1(t);
    while(t--)
    {
        sf1(n);
        long long ans=0;
        FOR1(i,n){
           sf1(x);
           if(n%2 and i%2) ans^=x;
        }
        pf1(ans);
    }
    return 0;
}
