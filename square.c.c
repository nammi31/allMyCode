
#include<stdio.h>
double find_square();
int main()
{
      double sqr;
      sqr=find_square();
      printf("square:%lf",sqr);
      return 0;
}
double find_square()
  {
      double num;
      scanf("%lf",&num);
      return num*num;
   }
