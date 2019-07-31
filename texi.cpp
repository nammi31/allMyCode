
#include<bits/stdc++.h>
#define sf1(x)   scanf("%d",&x)
#define pf1(x)   printf("%d\n",x)
using namespace std;
int main()
{
    int n;
    while(sf1(n)==1)
    {
        int a,cnt[5]={0},txi=0;
        for(int i=0;i<n;i++){
            sf1(a);
            cnt[a]++;
        }
        txi+=cnt[4]; cnt[4]=0;
        if(cnt[3]>=cnt[1]){ cnt[1]=0;  txi+=cnt[3]; }
        else if(cnt[3]<cnt[1]){ cnt[1]=cnt[1]-cnt[3];  txi+=cnt[3]; }
        txi+=(cnt[2]/2);
        cnt[2]=cnt[2]%2;
        if(cnt[2]) { cnt[1]-=2;  txi++; }
        if(cnt[1]>=1){
                txi+=(cnt[1]/4) ;
                if( cnt[1]%4!=0)   txi++;
        }
        pf1(txi);
    }
    return 0;
}
