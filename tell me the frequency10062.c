#include<stdio.h>
int main()
{
    char str[130],test=0,i,count,j,freq[130],a;
    while(scanf("%s",&str)==1){
       if(test)
       printf("\n");
       test=1;
       a=0;
       for(i=32;i<=127;i++){
         count=0;
         for(j=0;str[j];j++){
            if(str[j]==i)
                count++;
                freq[a]=count;
                a++;
          }
        printf("freq[%d] = %d\n",a,freq[a]);
       }
    }
    return 0;
}
