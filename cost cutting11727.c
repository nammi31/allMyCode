#include<stdio.h>
int main()
{
    int t,s1,s2,s3,i;
    scanf("%d",&t);
    while(t--){
        for(i=0; i<=t; i++){
            scanf("%d %d %d",&s1,&s2,&s3);
            if((s1>s2 && s1<s3)||(s1<s2 && s1>s3))
                printf("%d\n",s1);
            else if((s2>s1 && s2<s3)||(s2<s1 && s2>s3))
                printf("%d\n",s2);
            else if((s3>s1 && s3<s2)||(s3<s1 && s3>s2))
                printf("%d\n",s3);
        }
        return 0;
    }

}
