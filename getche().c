
#include<stdio.h>
int main()
{
      int a,b;
      char ch;
   //printf("\nits ascii code %d",ch);
      printf("two numbers: ");
      scanf("%d %d",&a,&b);
       ch=getche();
       printf("\n");
      if(ch=='A')printf("%d",a+b);
     else if(ch=='S')printf("%d",a-b);
     else if(ch=='M')printf("%d",a*b);
    else if(ch=='D' && b!=0)printf("%d",a/b);
      return 0;
}
