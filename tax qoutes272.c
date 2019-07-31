#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int t,count=0,i;
    while(gets(str))
    {
        for(i=0; str[i]; i++)
        {
            if(str[i]=='"')
            {
                count++;
                if(count%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
