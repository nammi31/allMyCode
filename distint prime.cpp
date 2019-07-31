#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int lucky[1005];
int p[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
void calc()
{
    int k=0;
    for(int i=30;i<2700; i++){
      int n=i,cnt=0;
      for(int j=0; p[j]*p[j]<=n; j++){
          if(n%p[j]==0){
            cnt++;
            while(n%p[j]==0) n/=p[j];
          }
       }
       if(n>1) cnt++;
       if(cnt>=3) lucky[++k]=i;
    }
}
int main()
{
    calc();
    int t,pos;
    sf1(t);
    while(t--){
        sf1(pos);
        pf1(lucky[pos]);
    }
    return 0;
}
