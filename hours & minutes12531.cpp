#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,angl;
    while(scanf("%f",&n)==1){
        int h,m,cnt;
        for(h=0;h<12;h++){
            cnt=0;
            for(m=0;m<60;m++){
                angl=abs(m-(h+m/12))*6;
                if(angl>180) angl=360-angl;

                if(n==angl){
                    cnt++;
               //   printf("%.1f %.2f %d %d %d\n",n,angl,h,m,cnt);
                }
        }
        }
    if(cnt>=1) cout<<"Y\n";
    else  cout<<"N\n";
    }
    return 0;
}
