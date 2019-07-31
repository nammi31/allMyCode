
#include<stdio.h>
int add(int num1,int num2);
int main()
{
      int a,b,sum;
      scanf("%d %d",&a,&b);
      sum=add(a,b);
      printf("sum=%d",sum);
      return 0;


}
int add(int num1,int num2)
{
      int add;
      add=num1+num2;
      return add;
}
