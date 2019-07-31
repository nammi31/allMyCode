/*#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
int cost[300][300],n,e,tc;
map<string,int>mp;
void in()
{
       int v=0,i,w;
       string s1,s2;
       for(i=0;i<e;i++){
           cin>>s1>>s2>>w;
           if(!mp[s1]) mp[s1]=++v;
           if(!mp[s2]) mp[s2]=++v;
           cost[mp[s1]][mp[s2]]=w;
           cost[mp[s2]][mp[s1]]=w;
       }
}

void Floyd_Warshall()
{
    int i,j,k;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                cost[i][j]=max(cost[i][j],min(cost[i][k],cost[k][j]));
}

int main()
{
   string sr,des;
   while(cin>>n>>e && (n|e))
   {
      in();
      Floyd_Warshall();
      cin>>sr>>des;
      cout<<"Scenario #"<<++tc<<endl<<cost[mp[sr]][mp[des]]<<" tons"<<endl<<endl;
      mp.clear();
      clr(cost);
   }
return 0;
}*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf          printf
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
map<string,int>mp;
int cost[300][300];
int main()
{
    int n,e,t=1;
    while(sf2(n,e)==2 && (n|e))
    {
        string s1,s2;
        int w,v=0;
        FOR1(i,e){
            cin>>s1>>s2;
            if(!mp[s1]) mp[s1]=++v;
            if(!mp[s2]) mp[s2]=++v;
            sf1(w);
            cost[mp[s1]][mp[s2]]=w;
            cost[mp[s2]][mp[s1]]=w;
        }
        FOR1(k,n){
            FOR1(i,n){
                FOR1(j,n)
                   cost[i][j]=max(cost[i][j],min(cost[i][k],cost[k][j]));
            }
        }
        string sr,des;
        cin>>sr>>des;
        pf("Scenario #%d\n",t++);
        pf("%d tons\n\n",cost[mp[sr]][mp[des]]);
        mem(cost,0);
        mp.clear();
    }
    return 0;
}
