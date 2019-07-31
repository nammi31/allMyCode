#include<bits/stdc++.h>
#define sf2(x,y)   scanf("%d %d",&x,&y)
using namespace std;
int graph[1005][1007];
double x[1005],y[1005];
int D,dis[1005],n;
int is_ok(int i,int j)
{
    double a=x[i]-x[j], b=y[i]-y[j];
    double d=sqrt(a*a+b*b);
    return (d<=D);
}
int die()
{
    dis[0]=0;
    queue<int>q;
    q.push(0);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<n; i++)
        {
            if(dis[i]==-1&&graph[u][i])
            {
                if(i==1) return dis[u];
                else dis[i]=dis[u]+1;
                q.push(i);
            }
        }
    }
    return -1;

}

int main()
{
    int v,t;
    char s[100];
    while(sf2(v,t)==2 && (v|t))
    {
        int D=v*t*60;
        n=0;
        getchar();
        while(gets(s))
        {
            if(strlen(s)==0) break;
            sscanf(s,"%lf %lf",&x[n],&y[n]);
            n++;
        }
        for(int i=0; i<n; i++)
        {
            graph[i][i]=1;
            for(int j=i+1; j<n; j++)
                graph[i][j]=graph[j][i]=is_ok(i,j);
        }
        memset(dis,-1,sizeof(dis));
        int ans=die();
        if(ans<0)
        printf("No\n");
        else printf("%d\n",ans);

    }
    return 0;
}
