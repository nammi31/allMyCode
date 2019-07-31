#include<bits/stdc++.h>
using namespace std;
long long  int dp[1100][1100],arr[1100][1100],n;
int cnt=1;
int  rec(int i,int j)
{
    if(i>=n || j<0 || j>=n || arr[i][j]==-1)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    printf("recursion %d (%d, %d)\n",cnt++,i,j);

  return  dp[i][j]=arr[i][j]+max(rec(i+1,j-1),rec(i+1,j+1));
}
int main()
{

int m,test,tt=0;
        scanf("%d",&test);
        while(test--)
        {
            memset(arr,-1,sizeof arr);
             memset(dp,-1,sizeof dp);
            scanf("%d",&m);

            n=(long long int)(2*m)-1;
           int k=1,p=m-1,q=1,t=0;
            for(int i=1;i<=m;i++)
            {
                k=1;
                for(int j=1;j<=q;j++){
                        if(k%2!=0)
                        scanf("%lld",&arr[t][j+p-1]);
                   k++;
                }
                q+=2;
                p--;
                t++;
            }
            p=1;
            q=2*m-2-1;
             for(int i=m-1;i>0;i--)
            {
            k=1;

                for(int j=1;j<=q;j++){
                        if(k%2!=0)
                        scanf("%lld",&arr[t][j+p-1]);
                  k++;
                }
                  q-=2;
                  p++;
                  t++;
            }
            rec(0,m-1);
             for(int i=0;i<n;i++){
                for(int j=0;j<n;j++)
                    printf("%d ",dp[i][j]);
                 printf("\n");
            }

printf("Case %d: %lld\n",++tt,dp[0][m-1]);

        }
}
