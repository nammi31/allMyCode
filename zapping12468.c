#include<stdio.h>
int main()
{
    int a,b,m;
    while(scanf("%d %d",&a,&b)==2){
            if(a==-1 && b==-1)
                break;
            m=b-a;
            if(m<0)
                m=(-1)*m;
            if(m>50)
                m=100-m;
            printf("%d\n",m);
        }
        return 0;
}
