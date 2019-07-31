
#include<stdio.h>
#include<conio.h>
int main()
{
      char ch1,ch2;
      int mask,i;
      printf("two characters:");
      ch1=getchar();
      ch2=getchar();

      mask=1;
      for(i=0;i<8;i++){
            if((mask & ch1) && (mask & ch2))
                  printf("bits %d the same\n",i);
            mask <<=1;
      }
   return 0;
}
