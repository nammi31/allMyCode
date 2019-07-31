#include<stdio.h>
int main()
{
    int t,i,days,sum,n,count,a,b,j;
    unsigned long long int area;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&days);
        area=1,sum=0;
        for(j=1;j<=days;j++){
           scanf("%d",&n);
           if(n>0)
             area=area*n;
           else{
            n=(-1)*n;
            area=area/n;
           }
           count=0;
           for(a=1;a<=area;a++){
            for(b=1;b<=(area/a) ;b++){
                if(area==(a*b)){
                    count++;
                    break;
                }
              }
           }
           sum=sum+count;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
