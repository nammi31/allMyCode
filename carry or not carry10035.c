 #include<stdio.h>
int main()
{
    int a,b,sum;
    while(scanf("%d %d",&a,&b)==2 && (a|b))
    {
        int cnt=0,carry=0;
        while(a || b)
        {
            sum= a%10 + b%10 +carry;
            if(sum>9){
                carry=1;
                cnt++;
            }
            else
                carry=0;

            a/=10,b/=10;
        }
        if(!cnt)
          printf("No carry operation.\n");
        else if(cnt==1)
          printf("1 carry operation.\n");
        else
          printf("%d carry operations.\n",cnt);
    }
    return 0;
}
