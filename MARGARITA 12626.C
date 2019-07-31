#include<stdio.h>
int main()
{
    int c,j,min;
    char str[605];
    scanf("%d",&c);
    while(c--){
       scanf("%s",str);
       int m=0,a=0,r=0,g=0,i=0,t=0;
       for(j=0;str[j];j++){
        if(str[j]=='M')
            m++;
        if(str[j]=='A')
            a++;
        if(str[j]=='R')
            r++;
        if(str[j]=='G')
            g++;
        if(str[j]=='I')
            i++;
        if(str[j]=='T')
            t++;
       }
       a=a/3;
       r=r/2;
       min=m;
       if(a<min)
         min=a;
       if(r<min)
         min=r;
       if(g<min)
         min=g;
       if(i<min)
         min=i;
       if(t<min)
         min=t;

       printf("%d\n",min);
    }
    return 0;
}
