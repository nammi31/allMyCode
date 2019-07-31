#include<stdio.h>
int main()
{
   int i,answer,chance,right;
   for(i=1;i<=10;i++){
      printf("what is %d+%d?\n",i,i);
      scanf("%d",&answer);
      if(answer==i+i)
      printf(" right!\n");

      else{
        printf("sorry,you are wrong.\n");
        right=0;
        for(chance=1;chance<=3 && !right; chance++){
           printf("try again answer=");
           scanf("%d",&answer);
           if(answer==i+i){
           printf("right\n");
           right=1;
            }
          }
        if(!right)
        printf("answer:%d\n",i+i);

       }
     }
    return 0;
}
