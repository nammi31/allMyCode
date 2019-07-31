#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define mx          1000001
using namespace std;
int p[mx],a[mx];
void seive()
{
    for(int i=2;i*i<=mx;i++) {
        if(p[i]==0) {  //prime
          for(int j=i*i;j<=mx;j+=i)
                p[j]=1;
        }
    }
    for(int i=2;i<=mx;i++){
        a[i]=(p[i]==0)+ a[i-1];
    }
}
int main()
{
    int q,L,R;
    sf1(q);
    seive();
    while(q--){
       sf2(L,R);
       if(L>R) swap(L,R);
       pf1(a[R]-a[L-1]);
    }
    return 0;
}
