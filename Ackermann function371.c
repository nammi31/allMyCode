#include<stdio.h>
int main()
{
    long long int a,b,tm,n,gn,i,mx;
    while(scanf("%lld %lld",&a,&b)==2 && (a&b))
    {
        if(a>b){
            tm=a;
            a=b;
            b=tm;
        }
        mx=0;
        for(i=a;i<=b;i++){
            n=i;
            int cnt=0;
            while(1){
                if(n%2) n=3*n+1;
                else  n/=2;
                cnt++;
                if(n==1)
                    break;
            }
            if(cnt>mx) mx=cnt,gn=i;
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,gn,mx);
    }
    return 0;
}
