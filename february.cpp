#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf          printf
#define pf1(x)      printf("%d ",x)
using namespace std;
int main()
{
    int n,date=1;
    sf1(n);
    int cnt[8]={0};
    for(int y=1900; y<=1900+n;y++){
        for(int m=0; m<12;m++){
            if(m==3 || m==5|| m==8|| m==10){
                for(int d=0;d<30;d++){
                    date++;date%=7;
                   if(d==12) cnt[date]++;
                }
            }
            if(m==1){
                if(y%400==0 || (y%100!=0 && y%4==0) ) {
                    for(int d=0;d<29;d++){
                      date++; date%=7;
                      if(d==12)  cnt[date]++;}
                }
                else{
                   for(int d=0;d<28;d++){
                    date++; date%=7;
                    if(d==12)  cnt[date]++;}
                }
            }
            else{
                for(int d=0;d<31;d++){
                    date++; date%=7;
                    if(d==12)  cnt[date]++;
                }
            }
        }
    }
    for(int i=0;i<6;i++) pf1(cnt[i]);
    pf("%d\n",cnt[6]);
    return 0;
}
