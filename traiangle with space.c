#include<stdio.h>
int main()
{
     int row,star,n;
     scanf("%d",&n);
     for(row=1;row<=n-1;row++){
      for(star=1;star<=row;star++){
            if(star==1||star==row || row==n)
                  printf("*");
                  else
                        printf(" ");
      }
      printf("\n");
     }
     return 0;

}

