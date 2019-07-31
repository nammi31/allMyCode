
#include<stdio.h>
int main()
{
    int t,i,t1,t2,f,at,ct1,ct2,ct3,avg,marks;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
            scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&at,&ct1,&ct2,&ct3);
            if(ct1<=ct2 && ct1<=ct3)
               avg=(ct2+ct3)/2;

            else if(ct2<=ct1 && ct2<=ct3)
               avg=(ct1+ct3)/2;

            else
                avg=(ct1+ct2)/2;
            marks=t1+t2+f+at+avg;

            printf("Case %d: ",i);
            if(marks>=90)
               printf("A");

            else if(marks>=80)
               printf("B");

            else if(marks>=70)
               printf("C");

            else if(marks>=60)
               printf("D");

            else if( marks<60)
               printf("F");
            printf("\n");
    }
    return 0;
}
