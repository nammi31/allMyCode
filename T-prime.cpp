#include<bits/stdc++.h>
#define mx 1000001
using namespace std;
int p[mx];
int main()
{
    int i,j;
    for(i=2;i<mx;i++) p[i]=1;
    for(i=2;i*i<mx;i++){
      if(p[i]){
        for(j=2;i*j<mx;j++)
              p[i*j]=0;
        }
    }
     int t;
     long long n,r;
     cin>>t;
     while(t--){
      cin>>n;
      r=sqrt(n);
      if(r*r==n && p[r] )
            printf("YES\n");
      else printf("NO\n");
     }
    return 0;
}
