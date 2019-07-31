 #include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main()
{
    double a,b,c;
    while(cin>>a>>b>>c){
        double s,T,r,R;
        s=(a+b+c)/2;
        T=sqrt(s*(s-a)*(s-b)*(s-c));
        r=T/s;
        R=(a*b*c)/(4*T);

        double sunflw,rose,violet;
        sunflw= PI*R*R - T;
        rose = PI*r*r;
        violet= T-rose;
      printf("%.4lf %.4lf %.4lf\n",sunflw,violet,rose);
    }
    return 0;
}
