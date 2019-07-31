#include<stdio.h>
#include<stdbool.h>
#define max 1000000
int main()
{

    int sum,n,i;
    bool flag[max]={false};
    for(i=1;i<max;i++){
        sum=i;
        n=i;
        while(n!=0){
            sum=sum+ n%10;
            n=n/10;
        }
        if(sum<max)
           flag[sum]=true;
    }

    for(i=1;i<max;i++){
        if(flag[i]==false)
            printf("%d\n",i);
    }
    return 0;
}
