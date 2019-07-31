
#include<stdio.h>
#define PI 3.1415
#define area(a) (PI*(a)*(a)) // work iike function
int main()
{
      int radius;
      float area;
      scanf("%d",&radius);
      area=area(radius);
      printf("Area=%.2f",area);
      return 0;
}
