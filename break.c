#include<stdio.h>
int main()
{
   int i;
   char ch;
   for(i=1;i<=50;i++){
      if(!(i%6)){  // i%6==0
        printf(" want more %d (y/n)",i);
        ch=getche();
         if(ch=='n')
         break;
         printf("\n");
      }
   }
  return 0;
}
