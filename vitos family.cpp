#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[500],i;
    cin>>t;
    while(t--){
       cin>>n;
       for(i=0;i<n;i++)
        cin>>a[i];
       sort(a,a+n);
       int sm=0,mid=n/2;
       for(i=0;i<n;i++)
          sm+=abs(a[mid]-a[i]);
          printf("%d\n",sm);
    }
    return 0;
}
