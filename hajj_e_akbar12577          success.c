#include<stdio.h>
#include<string.h>
int main()
{
    char str1[5]="Hajj",str2[6]="Umrah",str3[2]="*",str[6];
    int i=1;
    while(scanf("%s",str)!=EOF){
         if(strcmp(str,str3)==0)
            break;
         else if(strcmp(str,str1)==0)
            printf("Case %d: Hajj-e-Akbar\n",i++);
        else if(strcmp(str,str2)==0)
            printf("Case %d: Hajj-e-Asghar\n",i++);

   }
   return 0;

}
