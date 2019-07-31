#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,sm,j=1;
    cin>>t;
    while(t--){
       cin>>a>>b>>c;
       sm=a+b+c;
       printf("Case %d: %d\n",j++,sm);
    }
    return 0;
}
