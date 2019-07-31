#include<stdio.h>
#include<string.h>
int main()
{
    char str[600];
    int test,j,len,min,t=0,m=0,a=0,r=0,g=0,i=0;
    scanf("%d",&test);
    while(test--){
        scanf("%s",str);
        len=strlen(str);
        for(j=0;j<len;j++){
            if(str[j]=='A')
                a++;
           else if(str[j]=='M')
                m++;
           else if(str[j]=='R')
                r++;
           else if(str[j]=='G')
                g++;
           else if(str[j]=='I')
                i++;
           else if(str[j]=='T')
                t++;

        }
        a=a/3;
        r=r/2;
        printf("%d %d %d %d %d %d \n",m,a,r,g,i,t);

        min=m;
        if(a<min)
            min=a;
        else if(r<min)
            min=r;
        else if(i<min)
            min=i;
        else if(t<min)
            min=t;
        else if(g<min)
            min=g;
    printf("%d\n",min);
    }
    return 0;
}
