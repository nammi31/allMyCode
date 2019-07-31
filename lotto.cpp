 /*#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 100010

int arr[15], now[7], n;
bool vis[15];

void backTrack(int sz, int pos)
{
    if(sz==3)
    {
        for(int i=0;i<2;i++)
            cout<<now[i]<<" ";
        cout<<now[2]<<"\n";
        return;
    }
    for(int i=pos;i<n;i++)
        if(!vis[i])
        {
            vis[i]=true;
            now[sz]=arr[i];
            backTrack(sz+1, i+1);
            vis[i]=false;
        }
    return;
}

int main()
{
    int tc, line=0;
    while(cin>>n && n)
    {
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(line) cout<<"\n";
        backTrack(0, 0);

        line++;
    }
return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int a[15],visit[15],store[7],n;
void backtrack(int cnt,int st)
{
    if(cnt==6){
        for(int i=0;i<5;i++)  cout<<store[i]<<" ";
          cout<<store[5]<<endl;
          return;
    }
    for(int i=st;i<n;i++){
        if(!visit[i]){
            visit[i]=1;
            store[cnt]=a[i];
            backtrack(cnt+1,i+1);
            visit[i]=0;
        }
    }
    return;
}
int main()
{
    int line=0;
    while(cin>>n && n){
        for(int i=0;i<n;i++) cin>>a[i];
        if(line) cout<<endl;
         line=1;
        backtrack(0,0);
    }

    return 0;
}
