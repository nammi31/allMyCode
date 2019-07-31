
#include<stdio.h>
int main()
{
      int choice;
      float num;
      printf("1.meter to feet\n 2.feet to meter");
      printf("choice number:");
      scanf("%d",&choice);
      if(choice==1){
      scanf("%f",&num);
            printf("feet=%f",num*3.28);
      }
         else{
            scanf("%f",&num);
          printf("meter=%f",num/3.28);

       }
          return 0;
}
