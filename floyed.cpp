#include<bits/stdc++.h>
#define inf    1<<20
using namespace std;
int main()
{
    int test,t;
    int a[100][100];

    cin>>test;
    for(t=1; t<=test; t++)
    {
        int node;
        cin>>node;
        for(int i=1; i<=node; i++)
        {
            for(int j=1; j<=node; j++)
            {
                    a[i][j]=inf;
            }
        }
        for(int i=0; i<=node; i++) a[i][i]=0;
        int u,v,w,p,g;
        for(int i=1; i<=node; i++)
        {
            cin>>u>>v>>w;
            a[u][v]=w;
        }
        cin>>p>>g;
        for(int k = 1; k <= node; k++)
        {
            for(int i = 1; i <= node; i++)
            {
                for(int j = 1; j <= node; j++)
                {
                    if(a[i][j]>(a[i][k]+a[k][j]))
                    {
                        a[i][j]=a[i][k]+a[k][j];
                    }
                }
            }
        }
        int ans=a[p][g]+a[g][p];
        printf("Case #%d: %d\n",t,ans);
    }
    return 0;
}
/*input
2
5
1 2 1
2 3 2
2 4 3
2 1 1
3 2 2
1 3
6
1 2 1
2 3 2
3 4 3
4 3 3
3 2 2
2 1 1
1 4
*/
