#include<stdio.h>
#include<math.h>
int main()
{
      double n,p;
      while(scanf("%lf%lf",&n,&p)!=EOF)
      {
            double k;
            k=pow(p,1.0/n);
            printf("%.0lf\n",k);
      }
      return 0;

}
