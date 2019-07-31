#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2,h3,h4,m3,m4;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        scanf("%d:%d %d:%d %d:%d %d:%d",&h1,&m1,&h2,&m2,&h3,&m3,&h4,&m4);
        int ws=h1*60+m1,we=h2*60+m2;
        int ms=h3*60+m3,me=h4*60+m4;
        printf("Case %d: ",i);
        if(ws>me || ms>we) cout<<"Hits Meeting\n";
        else cout<<"Mrs Meeting\n";
    }
    return 0;
}
