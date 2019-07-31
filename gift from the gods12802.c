#include<stdio.h>
int main()
{
    int n;
    while(1){
       scanf("%d",&n);
       printf("%d\n",2*n);

       int rev=0,x=n;
       while(n){
            rev=rev*10+n%10;
            n/=10;
            }
       if(rev==x){
              int prime=1,i;
              if(x<2) prime=0;
              else if(x==2)  prime=1;
              else{
                   for(i=2;i*i<=x;i++){
                     if(x%i==0){
                      prime=0;
                      break;
                     }
                  }
              }
           if(prime)
             break;
        }
    }
    return 0;
}
