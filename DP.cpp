/*
 * Author:
 * Created Time:  2013/10/14 22:43:39
 * File Name: A.cpp
 * solve: A.cpp
 */
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<string>
#include<map>
#include<stack>
#include<set>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define sz(v) ((int)(v).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repf(i, a, b) for (int i = (a); i <= (b); ++i)
#define repd(i, a, b) for (int i = (a); i >= (b); --i)
#define clr(x) memset(x,0,sizeof(x))
#define clrs( x , y ) memset(x,y,sizeof(x))
#define out(x) printf(#x" %d\n", x)
#define sqr(x) ((x) * (x))
typedef long long LL;

const int INF = 1000000000;
const double eps = 1e-8;
const int maxn = 300;

int sgn(const double &x) {  return (x > eps) - (x < -eps); }
int num[maxn];
int dp[100][450*100 + 10];
int MIN[maxn];
int MAX[maxn];
bool cmp(int x ,int y)
{
    return x > y;
}
int main()
{

    int T;
    scanf("%d",&T);
    int first = 0;
    while(T--)
    {
        if(first)
            printf("\n");
        first = 1;
        int n;
        scanf("%d",&n);

        int sum = 0;
        repf(i,1,n)
        {
            scanf("%d",&num[i]);
            sum += num[i];
        }

        clr(dp);

        dp[0][0] = 1;

        sort(num+1,num+1+n,cmp);

        MAX[0] = 0;
        repf(i,1,n)
            MAX[i] = MAX[i-1] + num[i];

        sort(num+1,num+1+n);

        MIN[0] = 0;
        repf(i,1,n)
            MIN[i] = MIN[i-1] + num[i];

        int N = n/2;

        repf(i,1,n)
        {
            int temp = min(N,i);
            repd(k,temp - 1,0 )
                repd(j,MAX[k],MIN[k])
                {
                    if(dp[k][j])
                        dp[k+1][num[i] + j] = 1;
                }
        }


        int ans = INF;
        repd(i,MAX[N],0)
        {
            if(dp[N][i])
            {
                ans = min( ans , abs( sum - i - i ) );
            }
        }
        int m = ( sum - ans ) / 2;
        printf("%d %d\n",m,sum-m);

    }
    return 0;
}
#include<iostream>
using namespace std;
int n,w[103],sum,ans,l,r;
bool dp[45005][103];
int main()
{
    int i;
       while(scanf("%d", &n) != EOF)
    {
        memset(dp, 0, sizeof(dp));

        sum=0;
        for(i=1;i<=n;i++)
            scanf("%d",&w[i]),sum+=w[i];
        dp[0][0]=1;
        dp[0][101]=1;

        for(i=1;i<=n;++i)
            for(int j=sum;j>=w[i];--j)
                if(dp[j-w[i]][101])
                {
                    dp[j][101]=1;
                    for(int k=0;k<n;k++)
                        if(dp[j-w[i]][k])
                            dp[j][k+1]=1;
                }
        ans=sum/2;
        while(!(dp[ans][101] && (dp[ans][n/2] || dp[ans][(n+1)/2])))
            --ans;
        printf("%d %d\n",ans,sum-ans);
    }
    return 0;
}
#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<set>
#include<map>

#define L(x) (x<<1)
#define R(x) (x<<1|1)
#define MID(x,y) ((x+y)>>1)

#define bug printf("hihi\n")

#define eps 1e-8
typedef long long ll;

using namespace std;

#define INF 0x3f3f3f3f
#define N 100005

ll dp[N];
int a[105];
int all;
int n;

bool judge(int m)
{
    ll ha=dp[m];
    int t=n/2;
    if(n&1)
        return (ha&(1ll<<t)||(ha&(1ll<<(t+1))));
    return (ha&(1ll<<t));
}

int main()
{
    int i,j,t,ca=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        all=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            all+=a[i];
        }
        memset(dp,0,sizeof(dp));
        int m=all/2;
        dp[0]=1;
        for(i=1;i<=n;i++)
        {
             for(int v=m;v>=a[i];v--)
                  dp[v]=dp[v]|((ll)dp[v-a[i]]<<1);
        }

        for(i=m;i>=0;i--)
            if(judge(i))
        {
              printf("Case %d: %d %d\n",++ca,i,all-i);
              break;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long dp[100050];
int arr[120];
int main()
{
    int T, _case = 1;
    scanf("%d", &T);
    while(T--)
    {
        memset(dp, 0, sizeof(dp));
        int sum = 0;
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; ++i)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        dp[0] = 1;
        int t = n / 2;
        for(int i = 1; i <= n; ++i)
            for(int j = sum; j >= arr[i]; --j)
                dp[j] |= dp[j - arr[i]] << 1;
        int a = -100000000, b = 100000000;
        for(int i = 0; i <= sum; ++i)
        {
            if(dp[i] & (1ll << t))
            {
                if(2 * i - sum < b - a)
                {
                    a = min(i, sum - i);
                    b = sum - a;
                }
            }
        }
        printf("Case %d: %d %dn", _case++, a, b);
    }
    return 0;
}
