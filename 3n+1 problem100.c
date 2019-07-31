#include<stdio.h>
int main()
{
    int a,b,n,i,mx,cnt,temp;
    while(scanf("%d %d",&a,&b)==2){
        printf("%d %d ",a,b);
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        mx=0;
        for(i=a;i<=b;i++){
            n=i;
            cnt=1;
            while(n!=1){
                if(n%2)
                    n=3*n+1;
                else
                    n/=2;
            cnt++;
            }
            if(cnt>mx)
               mx=cnt;
        }
     printf("%d\n",mx);
    }
    return 0;
 }
