#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(x)      scanf("%s",x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n;
    while(sf1(n)==1)
    {
        char s[n];
        sfs(s);
        int p1r=0,p1b=0,p2r=0,p2b=0;
        FOR(i,n){
                ///p1 = rbrb...
            if(i%2==0)
                if(s[i]!='r') p1r++;
            else
               if(s[i]!='b') p1b++;
            ///p2 = brbr....
            if(i%2==0)
                if(s[i]!='b') p2b++;
            else
                if(s[i]!='r') p2r++;

        }
        int ans1=max(p1b,p1r);
        int ans2=max(p2b,p2r);
        pf1(min(ans1,ans2));
    }
    return 0;
}
/*
5
rbbrr

5
bbbbb
*/
