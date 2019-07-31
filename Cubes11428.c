#include<stdio.h>
int main()
{
    int n,x,y,flag;
    while(scanf("%d",&n)==1){
            if(n==0)
            break;
        flag=0;
        for(x=1;x<=59;x++){
            for(y=0;y<x;y++){
                if( n==(x*x*x-y*y*y)){
                    printf("%d %d\n",x,y);
                    flag=1;
                    break;
               }
            }
            if(flag==1)
               break;
        }
        if(flag!=1)
            printf("No solution\n");
    }
    return 0;
}
