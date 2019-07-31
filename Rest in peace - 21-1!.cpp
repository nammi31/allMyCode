#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf         printf
using namespace std;
int main()
{
    int t,n,r;
    sf1(t);
    while(t--)
    {
      string s;
      cin>>s;
      r=0; char found21=0;
      for(int i=0; s[i]; i++) {
           n=r*10+(s[i]-48);
           r=n%21;
           if(s[i]=='2' && s[i+1]=='1') found21=1;
      }
      if(r==0 || found21) pf("The streak is broken!\n");
      else  pf("The streak lives still in our heart!\n");
    }
    return 0;
}
