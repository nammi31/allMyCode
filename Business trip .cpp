#include<bits/stdc++.h>
#define sf1(x)   scanf("%d",&x)
#define  pf1(x)  printf("%d\n",x)
using namespace std;
int main()
{
    int n,a[13];
    while(sf1(n)==1)
    {
        int total=0;
        for(int i=0;i<12;i++)  {  sf1(a[i]); total+=a[i];}
        if(total<n) printf("-1\n");
        else{
           sort(a,a+12,greater<int>());
           int sm=0,cnt=0;
           for(int i=0;i<12;i++)
           {
            if(n!=0) cnt++;
            sm+=a[i];
            if(sm>=n) {break;}
           }
           pf1(cnt);
        }
    }
    return 0;
}

