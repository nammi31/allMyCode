
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int a[100007];
int main()
{
    int n,x;
    sf2(n,x);
    int p=-1;
    FOR(i,n){
        sf1(a[i]);
        if(a[i]==x){
            p=i+1;
        }
    }
    pf1(p);
    return 0;
}
