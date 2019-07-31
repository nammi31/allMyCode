#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int t,n,a,b;
    sf1(t);
    while(t--)
    {
        sf1(n);
        pair<int,int>p[n];
        FOR(i,n){
            sf2(a,b);
            p[i]=make_pair(b,a);
        }
        sort(p,p+n);
        int e=-1,cnt=0;
        FOR(i,n){
          if(p[i].second>=e){
            cnt++;
            e=p[i].first;
          }
        }
        pf1(cnt);
    }
    return 0;
}
