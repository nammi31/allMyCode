#include<stdio.h>
#include<math.h>
int main()
{
    double choice,u,a,v,s,t,u2,v2;
    int i=1;
    while(scanf("%lf",&choice)==1){
        if(choice==0)
            break;
        if(choice==1){
            scanf("%lf %lf %lf",&u,&v,&t);
            s=(u+v)*t/2;
            a=(v-u)/t;
            printf("Case %d: %.3lf %.3lf\n",i++,s,a);
        }
        else if(choice==2){
            scanf("%lf %lf %lf",&u,&v,&a);
            s=(v*v-u*u)/(2*a);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i++,s,t);
        }
        else if(choice==3){
            scanf("%lf %lf %lf",&u,&a,&s);
            v2=u*u+2*a*s;
            v=sqrt(v2);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i++,v,t);
        }
        else if(choice==4){
            scanf("%lf %lf %lf",&v,&a,&s);
            u2=v*v-2*a*s;
            u=sqrt(u2);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i++,u,t);

        }
    }
   return 0;
}
