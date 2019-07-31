#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(cin>>n){
    int sm=0;
    if(n>0)
        for(i=1;i<=n;i++) sm+=i;
    else
        for(i=1;i>=n;i--) sm+=i;
    printf("%d\n",sm);

    }
    return 0;
}
