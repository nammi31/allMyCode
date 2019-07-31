#include<stdio.h>
int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)==2){
        if(m%2==0||n%2==1){
            printf("yes\n");
        }
        else printf("no\n");

    }
    return 0;
}
