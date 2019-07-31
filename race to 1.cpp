
#include<cstdio>
#include<cmath>
#include<vector>
#include<cstring>
using namespace std;

typedef long long ll;
const int N = 1e6+10;

 double f[N];
 vector<int> ps;
 int n,vis[N],isp[N];

 void get_primes() {
     memset(isp,0,sizeof(isp));
     for(int i=2;i<=N;i++)
        if(!isp[i]){
          ps.push_back(i);
         if((ll)i*i<=(ll)N) for(int j=i*i;j<=N;j+=i) isp[j]=1;
         }
 }

 double dp(int x) {
      if(x==1) return 0;
     if(vis[x]) return f[x];
     vis[x]=1;
     f[x]=0.0; int g=0,p=0;
     for(int i=0;i<ps.size() && ps[i]<=x;i++) {
         int y=ps[i]; p++;
         if(x%y==0) g++ , f[x]+=dp(x/y);
     }
     f[x]=(f[x]+p)/g;
     return f[x];
 }

 int main() {
     get_primes();
     int T,kase=0;
     scanf("%d",&T);
     while(T--) {
         scanf("%d",&n);
         printf("Case %d: %.10lf\n",++kase,dp(n));
     }
     return 0;
 }
