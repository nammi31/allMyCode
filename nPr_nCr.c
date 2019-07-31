#include<stdio.h>
long long fact(int n);
int main()
{
    int n,r;
    long long nCr,nPr;
    scanf("%d %d",&n ,&r);
    nPr=fact(n)/fact(n-r);
    nCr=nPr/fact(r);
    printf("nPr:%lld\n",nPr);
    printf("nCr:%lld\n",nCr);
    return 0;
}
long long fact(int n)
{
    int i,fact=1;
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    return fact;

}
