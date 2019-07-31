#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3){
            if(a==b && b==c && c==a){
                printf("*\n");
            }
            else if(a==b &b!=c)
                printf("C\n");
            else if(b==c &&c!=a)
                printf("A\n");
            else if(c==a && a!=b)
                printf("B\n");
    }
    return 0;
}

