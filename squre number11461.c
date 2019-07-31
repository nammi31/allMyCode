#include<stdio.h>
#include<math.h>
int main()
{
    int i,num,count;
    double a,b,root;
    while (scanf("%lf %lf",&a,&b)!=EOF)
    {
        if(a==0 && b==0)
            break;
        else
        {
            count=0;
            for(i=a; i<=b; i++)
            {
                root=(double)sqrt(i);
                num=(int)root;
                if(num==root)
                    count++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
