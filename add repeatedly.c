#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    while(1){
        scanf("%d %d",&a,&b);
        getchar();
        printf("sum:%d\n",a+b);
        printf("want to add more(y/n)");
        ch=getchar();
        if(ch=='y'||ch=='Y')
            continue;
        else
            break;

    }
    return 0;
}
