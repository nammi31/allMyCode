#include<stdio.h>
#include<string.h>
int main()
{
    int c,n,i,j;
    char s[12];
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
        scanf("%d %s",&n,s);
        int a=0,b=0,w=0,t=0;

        for(j=0; s[j]; j++){
            if(s[j]=='A')
                a++;
            else if(s[j]=='B')
                b++;
            else if(s[j]=='W')
                w++;
            else
                t++;
        }
        printf("Case %d: ",i);
        if(a==n)
          printf("ABANDONED\n");
        else if( b+a==n )
            printf("BANGLAWASH\n");
        else if( w+a==n )
            printf("WHITEWASH\n");
        else if(b>w)
            printf("BANGLADESH %d - %d\n",b,w);
        else if(w>b)
             printf("WWW %d - %d\n",w,b);
        else
            printf("DRAW %d %d\n",w,t);
    }
    return 0;
}
