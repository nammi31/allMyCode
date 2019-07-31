#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dist[15];
    memset(dist,-1,sizeof(dist));
    dist[2]=0;
    queue<int>q;
    q.push(2);
    vector<int>v[15];
    while(!q.empty()){
       int x=q.front();
       q.pop();
       for(int i=0;i<v[x].size();i++){
            if(dist[v[x][i]]==-1){
              dist[v[x][i]]=dist[x]+1;
              q.push(v[x][i]);
        }
       }
    }
    return 0;
}
