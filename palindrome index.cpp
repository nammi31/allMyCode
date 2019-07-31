#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int t;
    sf1(t);
    while(t--)
    {
       string s;
       cin>>s;
       int ln=s.length(),pos=-1;
       for(int i=0; i<ln/2; i++){
          if(s[i]!=s[ln-i-1]){
            if(s[i]==s[ln-i-2]) pos=ln-i-1;
            else pos=i;
          }
       }
       pf1(pos);
    }
    return 0;
}
