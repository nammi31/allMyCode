
#include<stdio.h>
int main()
{
    int n,i,m;
    for(n=1;n<=3;n++){
        for(i=1;i<=3;i++){
                if(i!=n){
            for(m=1;m<=3;m++){
                    if(m!=n && m!=i){
                printf("%d %d %d\n",n,i,m);
                }
            }
          }
        }
    }
    return 0;
}
