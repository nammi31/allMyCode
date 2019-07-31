#include<bits/stdc++.h>
#define sf1(x)  scanf("%d",&x)
#define pf1(x)  printf("%d\n",x);
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)  for(int i=0;i<x;i++)
#define inf 1000000007
using namespace std;
int n,a[25],mn=inf;
void rec(int pos,int sm1,int sm2)
{
    if(pos==n){
        mn=min(mn,abs(sm1-sm2));
        return;
    }
    rec(pos+1,sm1+a[pos],sm2);
    rec(pos+1,sm1,sm2+a[pos]);
}
int main()
{
    sf1(n);
    FOR(i,n)  sf1(a[i]);
    rec(0,0,0);
    pf1(mn);
    return 0;
}
