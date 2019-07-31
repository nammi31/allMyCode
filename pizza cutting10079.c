#include<stdio.h>
int main()
{
    long long int n,piece,i;
    while(scanf("%lld",&n)==1){
            if(n<0)
            break;
      piece=1;
      for(i=0;i<=n;i++){
        piece=piece+i;
      }
    printf("%lld\n",piece);
    }
    return 0;
}
