  #include<stdio.h>
int main()
{
    int h1,m1,h2,m2,H,M,ans;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
             break;

        M=m2-m1;
        H=h2-h1;
        if (H<0||(H==0 && M<=0))
            H=H+24;
        ans=H*60+M;
        printf("%d\n",ans);
    }
    return 0;

}
