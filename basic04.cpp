#include<iostream>
#include<cstdio>
#define mx 100002
using namespace std;
int main()
{
    int t,x1,x2,y1,y2,i,j=1;
    cin>>t;
    while(t--){
        cin>>x1>>y1>>x2>>y2;
        int n,x[mx],y[mx];
        cin>>n;
        for(i=0;i<n;i++)
            cin>>x[i]>>y[i];
        printf("Case %d:\n",j++);
        for(i=0;i<n;i++){
            if((x[i]>=x1 && x[i]<=x2) && (y[i]>=y1 && y[i]<=y2))
                cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    return 0;
}
