#include<bits/stdc++.h>
#define mx 3000
using namespace std;
int a[500],dis[1002],i,j,c;
void seive()
{
  int p[mx];
  for(i=2;i<mx; i++) p[i]=1;
  for(i=2;i*i<mx;i++){
    if(p[i]){
        for(j=2; i*j<mx; j++)
            p[i*j]=0;
    }
  }

  a[0]=2,c=1;
  for(i=3;i<mx;i+=2)
     if(p[i])  a[c++]=i;

}
void discal()
{
    seive();
    dis[1]=30,dis[2]=42;
    int m=3;
    for(i=43; m<=1000; i++){
        int n=i,cnt=0;
        for(j=0; ;j++){
            if(n%a[j]==0){
                cnt++;
                while(n%a[j]==0) n/=a[j];
            }
            if(n==1) break;
        }
        if(cnt>=3) dis[m++]=i;
    }
}
int main()
{
    discal();
    int t,k;
    cin>>t;
    while(t--){
        cin>>k;
        cout<<dis[k]<<endl;
    }
    return 0;
}
