#include<stdio.h>

int reverse(int num);
int main()
{
    int n,r;
    scanf("%d",&n);
    r=reverse(n);
    printf("%d",r);
    return 0;

}
int reverse(int num)
{
    static int  rev=0;
       if(num!=0){
    rev=rev*10+num%10;
    reverse(num/10);
       }
    return rev;
}

