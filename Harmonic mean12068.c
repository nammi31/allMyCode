 #include<stdio.h>
long long gcd(long long a,long long b)
{
    if(b>a) return gcd(b,a);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    long long  prod,sum,m,n,d;
    int t,N,i,j,arr[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&N);
        prod=1;
        for(j=0;j<N;j++){
            scanf("%d",&arr[j]);
            prod=prod*arr[j];
        }
        m=N*prod;
        sum=0;
        for(j=0;j<N;j++){
            sum+= prod/(arr[j]);
        }
        n=sum;
        d=gcd(m,n);
        printf("Case %d: %lld/%lld\n",i,m/d,n/d);
    }
    return 0;
}
