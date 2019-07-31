#include<stdio.h>
main()
{
    int i=1,n;
    scanf("%d%d",&n);
    while (1)
    {
        if(i==5)
            break;
        printf("%d",i);
        i++;
    }
    printf("finish\n");
}
