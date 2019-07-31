#include<bits/stdc++.h>
#define Mx 10005
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
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        int mx=max(a,b); int mn=min(a,b);
        int ans=-1;
        char found=0;
        for(int i=mx;(i>=mn && !found);i--){
            if(p[i]){
                  found=1; ans=i;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
