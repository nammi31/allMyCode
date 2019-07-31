#include<bits/stdc++.h>
#define sf1(x)   scanf("%d",&x)
#define  pf1(x)  printf("%d\n",x)
using namespace  std;
 int main()
 {
     int len;
     string s;
     while(sf1(len)==1)
     {
         cin>>s;
         int one=0,zero=0;
         for(int i=0;s[i];i++)
         {

             if(s[i]=='1') one++;
             else   zero++;
         }
         pf1(abs(zero-one));
     }
     return 0;
 }

