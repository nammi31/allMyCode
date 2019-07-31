#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<x;i++)
using namespace std;
int main()
{
    int n,fine,guest;
    while(sf2(n,fine)==2){
        int  price[105],pay[105];
        FOR(i,n) sf1(price[i]);
        sf1(guest);
        sort(price,price+n);
        pay[0]=price[0];
        FOR1(i,n)  pay[i]=pay[i-1]+price[i];
        int profit;
        if(guest<=n) profit = pay[guest-1];
        else{
            fine=(guest-n)*fine;
            profit=pay[n-1]-fine;
        }
        pf1(profit);

    }
    return 0;
}
/*
2 1
2 1
2

2 1
2 1
10
*/
