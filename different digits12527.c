#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
       int cnt=0,i,n;
        for(i=a;i<=b;i++){
            int arr[10]={0};
            n=i;
            while(n!=0){
                arr[n%10]++;
                if(arr[n%10]>1)
                   break;
                n/=10;
            }
            if(n==0)
                cnt++;
        }
        printf("%d\n",cnt);

    }
    return 0;
}
