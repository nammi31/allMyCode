#include<stdio.h>
int main()
{
    signed long int t,i,a,b,c;
   while(scanf("%ld",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            if((b+c)>a && (c+a)>b && (a+b)>c)
            {
                if(a==b && b==c)
                    printf("Case %ld: Equilateral\n",i) ;

                else if(a==b ||b==c ||c==a )
                    printf("Case %ld: Isosceles\n",i);

                else if(a!=b && b!=c && c!=a)
                    printf("Case %ld: Scalene\n",i);
            }
            else
                printf("Case %ld: Invalid\n",i);
            }
      return 0;
    }
}
