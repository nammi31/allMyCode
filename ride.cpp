/*
ID: sustnam1
PROG: ride
LANG: C++
*/
#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%s\n%s",x,y)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    char s1[9],s2[9];
    sf2(s1,s2);
    int prod1=1,prod2=1;
    for(int i=0; s1[i]; i++) prod1=(prod1*(s1[i]-64))%47;
    for(int i=0; s2[i]; i++) prod2=(prod2*(s2[i]-64))%47;
    pfs((prod1==prod2)?"GO":"STAY");
    return 0;
}
