#include<stdio.h>
int main()
{
     int t,i,l,w,h;
     scanf("%d",&t);
     if(t>0 && t<=100){
        for(i=1;i<=t;i++){
            scanf("%d %d %d",&l,&w,&h);
            if(l<=20 && w<=20 && h<=20)
                printf("Case %d: good\n",i);
            else
                printf("Case %d: bad\n",i);
        }
     }
     return 0;
}
