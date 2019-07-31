#include<stdio.h>
int main()
{
     int t,i,d1,m1,y1,d2,m2,y2,days,age;
     scanf("%d",&t);
     if(t>0 && t<=200){
        for(i=1;i<=t;i++){
            scanf("%d/%d/%d",&d1,&m1,&y1);
            scanf("%d/%d/%d",&d2,&m2,&y2);
            days=(y1-y2)*365+(m1-m2)*30+(d1-d2);
            age=days/365;
            if(days<0)
                printf("Case #%d: Invalid birth date\n",i);
            else if(age>130)
                printf("Case #%d: Check birth date\n",i);
            else if(age==0)
                printf("Case #%d: 0\n",i);
            else
                printf("Case #%d: %d\n",i,age);

        }
     }
   return 0;
}
