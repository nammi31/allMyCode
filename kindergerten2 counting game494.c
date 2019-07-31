#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[10000];
    while(gets(str)){
        int count=0,i;
        for( i=0;str[i];i++){
            if( isalpha(str[i])&& !isalpha(str[i+1]) )
            count++;
        }
    printf("%d\n",count);
    }
    return 0;
}
