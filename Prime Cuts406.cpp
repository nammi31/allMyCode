#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,c,prime[200];
    while(cin>>N>>c){
         int n,d,a=0;
        for(n=1;n<=N;n++){
           for(d=2;d*d<=n;d++){
              if(n%d==0)
                break;
          }
         if(d*d>n) prime[++a]=n;
      }
      cout<<N<<" "<<c<<":";
      int st,en,mid;
      if(2*c-1>a) st=1,en=a;
      else{
           mid=a/2+1,st=mid-c+1,en=mid+c-1;
           if(!(a%2)) st=st-1;
      }
      for(int i=st; i<=en; i++)
         cout<<" "<<prime[i];
      cout<<"\n\n";
    }
    return 0;
}
