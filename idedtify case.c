#include<stdio.h>
int main()
{
    char ch;

  /*scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
         printf("lowercase");
         }
      else if (ch>='A' && ch<='Z'){
        printf("uppercase");}*/

     ch=getchar();
    if(isupper(ch)){
     printf("upper");
    }
  else if(islower(ch))
     printf("lower");
          else if(isdigit(ch))
            printf("digit");
          return 0;
 }
