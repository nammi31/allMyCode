#include<bits/stdc++.h>
#define Mx 1000005
#define pf  printf
#define sf1(x)   scanf("%d",&x)
using namespace std;
char p[Mx];
void seive()
{
    int r,i,j;
    for(i=2;i<=Mx;i++) p[i]=1;
    r=sqrt(Mx);
    for(i=2;i<=r;i++){
      if(p[i]){
        for(j=2;i*j<=Mx;j++)
              p[i*j]=0;
        }
    }

}
int main()
{
    seive();
    int t,n;
    sf1(t);
    while(t--)
    {
       sf1(n);
       if(p[n]) pf("%d is a prime number.\n",n);
       else pf("%d is not a prime number.\n",n);
    }
    return 0;
}
