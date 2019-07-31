#include<stdio.h>
int main()
{
    int arr[20],max,j=1,n,prod,i;
    while(scanf("%d",&n)==1){
       for(i=0;i<n;i++)
          scanf("%d",&arr[i]);
       int temp=0;
       for(i=0;i<n;i++){
            if(arr[i]!=1){
            temp=1;
            prod=temp*arr[i];
            if(prod>temp)
            temp=prod;
       }
       printf("prod: %d\ntemp: %d\n",prod,temp);
       if(temp!=1 || prod==1)
        max=temp;
        else
        max=0;
       printf("Case #%d: The maximum product is %d.\n\n",j++,max);
    }
    return 0;
}
