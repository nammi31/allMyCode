#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    while(cin>>a>>b>>c){
        double s,T,r;
        s=(a+b+c)/2;
        if(!s) r=0;
        else{
           T=sqrt(s*(s-a)*(s-b)*(s-c));
           r=T/s;
        }
    printf("The radius of the round table is: %.3lf\n",r);
    }
    return 0;
}
