#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a,ans;
    while(cin>>n>>m>>a){
        ans=ceil(n/a) * ceil(m/a);
        printf("%.0lf\n",ans);
    }
    return 0;
}
