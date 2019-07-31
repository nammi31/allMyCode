 #include<stdio.h>
int main()
{
    int num,bi_arr[100],i=0,j,q;
    scanf("%d",&num);
    q=num;
    while(q!=0){
        bi_arr[++i]=q%2;
        q=q/2;
    }
    for(j=i;j>=1;j--)
        printf("%d",bi_arr[j]);
    return 0;

}
