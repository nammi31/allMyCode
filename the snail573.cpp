#include<bits/stdc++.h>
using namespace std;
int main()
{
    float h,up,dn,p;
    while(cin>>h>>up>>dn>>p && h)
    {
         float d=0,fdn=(p*up)/100.0;
         int day;
         for(day=1; ;day++){
             d=d+up;
             if(d>h) break;
             d=d-dn;
             if(d<0) break;
             up=up-fdn;
             if(up<0) up=0;
          }
          printf("%s on day %d\n",(d>h)? "success": "failure",day);
    }
    return 0;
}
