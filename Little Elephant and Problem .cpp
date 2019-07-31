#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    int n;
    while(sf1(n)==1){
      int a[n],b[n];
      FOR(i,n) { sf1(a[i]); b[i]=a[i]; }
      sort(b,b+n);
      int cnt=0;
      FOR(i,n)  if(a[i]!=b[i]) cnt++;
      pfs((cnt>2)?"NO":"YES");
    }
    return 0;
}
/*
2
1 2

3
3 2 1

4
4 3 2 1
*/
