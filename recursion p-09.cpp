#include<bits/stdc++.h>
using namespace std;
int find_mx(int i,int n,int *a)
{
    if(i==n-1) return a[i];
     int mx=find_mx(i+1,n,a);
        return(a[i]>mx)? a[i]:mx;
}
int main()
{
    int n,a[30];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m=find_mx(0,n,a);
    cout<<m<<endl;
    return 0;
}
