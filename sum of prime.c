 #include<stdio.h>
int check_prime(int n);
int main()
{
    int num,i,flag=0;
    printf("number:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if((check_prime(i)==1)&&(check_prime(num-i)==1)){
            printf("%d=%d+%d\n",num,i,num-i);
            flag=1;
        }
    }
       if(flag==0)
        printf("can't be expressed as sum of prime");
       return 0;
}
int check_prime(int n)
{
    int i,is_prime=1;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            is_prime=0;
    }
    return is_prime;
}
