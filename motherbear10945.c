#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[10000],copy[10000],ch;
    int a,i,j;
    while(gets(str)){
       if(strcmp(str,"DONE")==0)
          break;
       a=0;
       for(i=0; str[i];i++){
           ch=tolower(str[i]);
             if(ch>='a' && ch<='z'){
               copy[a++]=ch;
           }
       }
       copy[a]='\0';
       for(j=0; j<a ;j++){
          if(copy[j]!=copy[a-j-1])
            break;
       }
      if(j==a)
        printf("You won't be eaten!\n");
      else
        printf("Uh oh..\n");
    }
    return 0;
}

