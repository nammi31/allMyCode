#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,n,area;
    while(cin>>a>>b>>c){
        s=(a+b+c)/2;
        n=s*(s-a)*(s-b)*(s-c);
        area=4*sqrt(n)/3;
         if(area>0)  printf("%.3lf\n",area);
        else cout<<"-1.000\n";
    }
       return 0;
}
