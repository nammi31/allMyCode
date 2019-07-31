#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1,a,b,c,sm;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        sm=a+b+c;
        printf("Case %d: Sum of %d, %d and %d is %d\n",j++,a,b,c,sm);
    }
    return 0;
}
