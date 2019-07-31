#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,d,sum,j,arr[15];
    char ns[1005];
    scanf("%d",&t);
    while(t--){
        scanf("%s %d",ns,&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

        for(i=0;i<n;i++){
            sum=0;
            for(j=0; ns[j] ;j++){
                sum=sum*10+ns[j]-48;
                sum=sum%arr[i];
              }
            if(sum!=0)
               break;
        }
        if(i==n)
            printf("%s - Wonderful.\n",ns);
        else
            printf("%s - Simple.\n",ns);
    }
    return 0;
}
