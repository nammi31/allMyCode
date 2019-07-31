#include <bits/stdc++.h>
#define   sf1(x)   scanf("%d",&x)
#define   sf2(x,y)  scanf("%d %d",&x,&y)
using namespace std;
void deleteStack( stack<int> st)
{
     while(!st.empty())
            st.pop();
}

vector<int> v1[10005],v2[10005];
int vis[10005],ans[10005];
stack<int> s;
int z;

void dfs(int u,bool f){
    vis[u] = 1;
    if(f){
        for(int i=0;i<v1[u].size();i++)
            if(!vis[v1[u][i]])
                dfs(v1[u][i],f);
        s.push(u);
    }
    else{
        z++;
        for(int i=0;i<v2[u].size();i++)
            if(!vis[v2[u][i]])
                dfs(v2[u][i],f);
    }
}

int main(){
	int i,u,v,n,m,t;
	sf1(t);
	while(t--){
        sf2(n,m);
       for(int i=0;i<=n+3;i++)
       {
            v1[i].clear();
            v2[i].clear();

       }
      for(i=0;i<=n+3;i++)  {vis[i]=0;  ans[i]=0;}
	  bool f;
      while(m--){
	    sf2(u,v);
	    v1[u].push_back(v);
	    v2[v].push_back(u);
	}
	f = true;
	for(i=1;i<=n;i++)
	    if(!vis[i])
	        dfs(i,f);
	f = false;
	//memset(vis,0,sizeof(vis));
	while(!s.empty()){
	    u = s.top();
	    z = 0;
	    if(!vis[u])
	        dfs(u,f);
	    if(z == 1)
	        ans[u] = 0;
	    else
	        ans[u] = 1;
	    s.pop();
	}
	int cnt=0;
	for(i=1;i<=n;i++)
	    if(!ans[i]) cnt++;
	    cout<<cnt<<endl;
	  deleteStack(s);
	}
	return 0;
}
