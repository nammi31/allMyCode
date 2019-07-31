#include<stdio.h>
int main()
{
    int t,h,m,H,M;
    scanf("%d",&t);
    while(t--){
        scanf("%d:%d",&h,&m);
        if(m==0){
            M=0;
            H=12-h;
            if(H==0)
              H=12;
        }
        else{
            M=60-m;
            H=11-h;
            if(H<=0)
              H=H+12;
        }
        printf("%02d:%02d\n",H,M);
    }
    return 0;
}
