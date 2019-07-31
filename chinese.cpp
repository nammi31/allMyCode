#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,total,ans,ans2,a,b;
    int c=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        total=3.14159*a*a;
        ans2=total*b/a;
        ans=total-ans2;
        ans2 = (ans2+ 0.00501);
        ans= (ans + 0.00501);
       printf("Taijitu #%d: yin %.2lf, yang %.2lf\n\n",c++,ans,ans2);
    }

    return 0;
}
Chat conversation end



























