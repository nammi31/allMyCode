#include<stdio.h>
int main()
{
    char ch,str[100];
    int i,count=0;
    printf("write a text:");
    gets(str);
    printf("searching character:");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(ch==str[i])
            count++;
    }
    printf("number of frequence use:%d\n",count);
    return 0;
}
