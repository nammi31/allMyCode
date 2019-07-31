/*ID: sustnam1
LANG: C++
TASK: friday
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define is_leap(x) ( x%400==0 || (x%100!=0 && x%4==0))
using namespace std;
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int cnt[7]={0};
int main()
{
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);
    int n,r=2;
    sf1(n);
    for(int y=1900; y<1900+n; y++){
        FOR(m,12){
            int total=days[m];
            if(m==1 && is_leap(y)) total++;
            FOR1(d,total){
                if(d==13) cnt[r]++;
                r=(r+1)%7;
            }
        }
    }
    FOR(i,6) pf1s(cnt[i]);
    pf1(cnt[6]);
    return 0;
}
