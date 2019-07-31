
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main(){
    int n, k;
    sf2(n,k);
    int a[n];
    FOR(i,n)  sf1(a[i]);
    sort(a,a+n);
    int cnt = 0;
    FOR(i,n)
        if(binary_search(a, a+n, a[i]+k)) cnt++;
    pf1(cnt);
}
