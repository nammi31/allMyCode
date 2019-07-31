#include<stdio.h>
#include<string.h>
int main()
{
    int i,g,l,gl,start,j,k;
    char str[100];
    for(i=1;i<=101;i++){
       scanf("%d",&g);
        if(g==0)
            break;
       scanf("%s",str);
        l=strlen(str);
       gl=l/g;
       for(j=1;j<=g;j++){
        start=j*gl;
        for(k=start-1;k>=start-gl;k--)
            printf("%c",str[k]);
       }
       printf("\n");
    }
   return 0;
}
