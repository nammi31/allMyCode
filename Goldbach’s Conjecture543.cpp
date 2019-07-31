
#include<bits/stdc++.h>
#define mx 10000000
using namespace std;
char p[mx];
int main()
{
    int r,i,j;
    for(i=2;i<=mx;i++) p[i]=1;
    r=sqrt(mx);
    for(i=2;i<=r;i++){
      if(p[i]){
        for(j=2;i*j<=mx;j++)
              p[i*j]=0;
        }
    }
    int n,rt;
    while(cin>>n && n){
        char found=0;
        for(i=3;i<n;i+=2){
                if(p[i] && p[n-i]){
                    found=1;
                    break;
                }
        }
        if(!found)  printf("Goldbach's conjecture is wrong.\n");
        else printf("%d = %d + %d\n",n,i,n-i);
    }
    return 0;
}
