
#include<stdio.h>
int main()
{
    int i,j,n,p;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
              p=0;
                break;
            }
          p=1;
        }
        if(p)
            printf("%d ",i);
    }
    return 0;
}
