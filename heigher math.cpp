#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,j=1,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        printf("Case %d: ",j++);
        if((a*a+b*b==c*c)||(b*b+c*c==a*a)|| (c*c+a*a==b*b))
            printf("yes\n");
        else printf("no\n");

    }
    return 0;
}
