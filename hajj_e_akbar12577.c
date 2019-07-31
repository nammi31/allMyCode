#include<stdio.h>
#include<string.h>
int main()
{
    char str1[5]="Hajj",str2[6]="Umrah",str3[2]="*",str[6];
    while(scanf("%s",str)!=EOF){
        if(strcmp(str,str1)==0)
            printf("Hajj_e_Akbar\n");
        else if(strcmp(str,str2)==0)
            printf("Hajj_e_Asghar\n");
        else if(strcmp(str,str3)==0)
            break;
   }
   return 0;

}
