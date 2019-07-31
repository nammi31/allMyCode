#include<stdio.h>
int main()
{
    int i,n,paste,line;
    for(i=1;i<=2000;i++){
        scanf("%d",&n);
        if(n<0)
            break;
        else{
            paste=1,line=1;
            while(line<n){
                line=line*2;
                paste++;
            }
        }
       printf("Case %d: %d\n",i,paste-1);
    }
    return 0;
}

