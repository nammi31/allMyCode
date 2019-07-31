
#include<stdio.h>
double add(double num1,double num2);
int main()
{
      double a,b,sum;
      a=2.7,b=3.5;
      sum=add(a,b);
      printf("%lf",sum);
      return 0;
}
double add(double num1,double num2)
{
     double sum=num1+num2;
      return sum;
}
