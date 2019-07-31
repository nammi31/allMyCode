/*
ID:sustnam1
PROG:beads
LANG:C++
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main()
{
    freopen("beads.in","r",stdin);
    freopen("beads.out","w",stdout);
    string s;
    int ln;
    while(sf1(ln)==1){
      cin>>s;
      s=s+s;
      int mx=0;
      FOR(i,ln){
        char pre=s[i];
        int j=i,match=0,cnt=0;
        if(pre!='w') match++;
        while(s[j]&& j<i+ln){
            if(s[j]!=pre && s[j]!='w'){ pre=s[j]; match++; }
            if(match==3) break;
            j++, cnt++;
        }
        if(cnt>mx) mx=cnt;
      }
      pf1(mx);
    }
    return 0;
}

