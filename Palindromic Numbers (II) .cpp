#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
using namespace std;
int main()
{
    string s,check;
    int t,k=1;
    sf1(t);
    while(t--){
      cin>>s;
      check=s;
      reverse(s.begin(),s.end());
      pcase(k++);
      if(s==check) pf("Yes\n");
      else pf("No\n");
    }
    return 0;
}
