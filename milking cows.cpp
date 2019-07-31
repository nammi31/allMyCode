/*ID: sustnam1
LANG: C++
TASK: milk2
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<x;i++)
using namespace std;
int main()
{
   // freopen("milk2.in", "r", stdin);
   //  freopen("milk2.out", "w", stdout);
    int n;
    sf1(n);
    pair<int,int>p[n];
    FOR(i,n){
        int a,b;
        sf2(a,b);
        p[i]=make_pair(a ,b);
    }
    sort(p,p+n);
    int s=p[0].first,e=p[0].second,mxc=e-s,mxg=0;
    FOR1(i,n){
        if(p[i].second>e){
          if(p[i].first<=e){
            e=p[i].second;
          }
          else{
            if(e-s>mxc) mxc=e-s;
            int gap =p[i].first-e;
            if(gap>mxg) mxg=gap;
            s=p[i].first;
            e=p[i].second;
         }
        }
    }
    pf2(mxc,mxg);
    return 0;
}
/*
3
300 1000
700 1200
1300 1500

5
300 1000
700 1200
1300 1500
1600 1800
1200 1500

10
2 3
1 20
4 5
6 7
8 9
10 11
12
13
14 15
16 17
18 19

*/
