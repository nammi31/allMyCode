#include<stdio.h>
int main()
{
    int a,t,b,c,d;
    scanf("%d",&t);
    while(t--){
            scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==0 && b==0 && c==0 && d==0)
            printf("square\n");
        else if(a>0 && b>0 && c>0 && d>0){
            if(a==b && b==c && c==d && d==a)
                printf("square\n");
            else if( (a==b && c==d) || (a==c &&b==d)|| (a==d && b==c))
              printf("rectangle\n");
            else if((b+c+d)<a|| (a+c+d)<b|| (a+b+d)<c ||(a+b+c)<d)
               printf("banana\n");
            else
              printf("quadrangle\n");
            }
        else
              printf("banana\n");
    }
    return 0;
}
