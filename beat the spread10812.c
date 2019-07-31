#include<stdio.h>
int main()
{
    int t,s,d,a,b,i;
    while(scanf("%d",&t)!=EOF){
       for(i=1;i<=t;i++){
        scanf("%d %d",&s,&d);
           if(s>=0 && d>=0 && s>=d && (s+d)%2==0){
            a=(s+d)/2;
            b=(s-d)/2;
            printf("%d %d\n",a,b);
           }
           else
            printf("impossible\n");
       }
    }
    return 0;
}
