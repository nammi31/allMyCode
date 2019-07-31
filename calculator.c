
#include<stdio.h>
int main()
{
   int a,b,val;
     char sign;
    scanf("%d %c %d",&a,&sign,&b);

   if(sign=='+'){
        val=a+b;
       printf("value:%d",val);}

   else if(sign=='-'){
     val=a-b;
     printf("value:%d",val);}

    else if(sign=='*'){
     val=a*b;
     printf("value:%d",val);
     }

     else if(sign=='/'){
     val=a/b;
     printf("value:%d",val);}

     else if(sign=='%'){
     val=a%b;
     printf("value:%d",val);}
     return 0;
}
