#include<stdio.h>
long long reverse(long long n)
{
    long long rev=0;
    int r;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    return rev;
}
int main()
{
    int t,count;
    long long n,R;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        count=0;
        while(1){
            R=reverse(n);
            if(R==n) break;
            n=n+R;
            count++;
        }
        printf("%d %lld\n",count,n);
    }
    return 0;
}
