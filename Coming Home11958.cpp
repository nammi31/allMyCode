#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,i,j=1,n,h1,m1,h2,m2,t;
    cin>>c;
    while(c--){
        int mn=1000000;
        scanf("%d %d:%d",&n,&h1,&m1);
        for(i=0;i<n;i++){
            scanf("%d:%d %d",&h2,&m2,&t);

            int m=m2-m1,h=h2-h1,M;
            if (h<0||(h==0 && m<=0)) h=h+24;

            M= h*60+ m +t;
            if(M < mn)  mn=M;
        }
        printf("Case %d: %d\n",j++,mn);
    }
    return 0;
}
