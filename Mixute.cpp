#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int color[100],sum[100][100],memo[100][100];

int solve(int a, int b){
    if(b == a) return 0;
    if(b == a+1) return color[a] * color[b];

    int &ret = memo[a][b],aux;

    if(ret == -1){
        for(int i = a;i+1 <= b;++i){
            aux = sum[a][i] * sum[i+1][b] + solve(a,i) + solve(i+1,b);
            if(ret == -1 || aux < ret) ret = aux;
        }
    }

    return ret;
}

int main(){
    int n;

    while(scanf("%d",&n) == 1){
        for(int i = 0;i < n;++i) scanf("%d",&color[i]);
        for(int i = 0;i < n;++i) sum[i][i] = color[i];

        for(int i = 0;i < n;++i){
            for(int j = i+1;j < n;++j){
                sum[i][j] = sum[i][j-1] + color[j];
                if(sum[i][j] >= 100) sum[i][j] -= 100;
            }
        }

        memset(memo,-1,sizeof(memo));
        printf("%d\n",solve(0,n-1));
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int dp[101][101];

/*This function is used to give the
sum of colours from a to be
after taking mod by 100*/

int Sum(int val[],int a,int b)
{
   int sumv=0;
   for(int i=a;i<=b;++i)
      sumv=(sumv+val[i])%100;
   return sumv;
}

/*This approach is very much similar to matrix chain multipliaction, where
we minimize the number of products/multiplications. Here we calculate the
residual smoke from both sides and then use this for storing the product.
dp[a][b] contains the value of product */

int HarryMatMul(int val[],int a,int b)
{
   if(dp[a][b]!=-1)
      return dp[a][b];
   else if(a==b)
   {
      dp[a][b]=0;
      return 0;
   }
   else
   {
      int temp;
      for(int k=a;k<b;++k)
      {
         temp=HarryMatMul(val,a,k)+HarryMatMul(val,k+1,b)+Sum(val,a,k)*Sum(val,k+1,b);

         if(dp[a][b]==-1||temp<dp[a][b])
            dp[a][b]=temp;
      }
      return dp[a][b];
   }
}

int main() {
   int n;

   while(scanf("%d",&n)!=EOF)
   {
      int val[n];
      memset(dp,-1,sizeof(dp));
      for(int i=0;i<n;++i)
         scanf("%d",&val[i]);
      printf("%d\n",HarryMatMul(val,0,n-1));
   }
   return 0;
}
