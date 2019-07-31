#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[60],i;
    while(cin>>n && n){
        a[0]= a[1]=1;
        for(i=2;i<=n;i++)
            a[i]=a[i-1]+a[i-2];
        printf("%d\n",a[n]);
    }
    return 0;
}
