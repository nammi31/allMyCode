#include<stdio.h>
 main(int arg_num,char *argv[])
{
    int i;
    printf("number of arguments:%d\n",arg_num);
    for(i=0;i<arg_num;i++)
        printf("%d command line arg passed:%s\n",i+1,argv[i]);
    return 0;
}

