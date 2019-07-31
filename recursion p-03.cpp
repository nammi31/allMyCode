#include<bits/stdc++.h>
using namespace std;
void recurse(int i,int n,int *a)
{
    if(i<n){
        if(a[i]%2==0) printf("%d ",a[i]);
        recurse(i+1,n,a);
    }
}
int main()
{
    int n,a[30];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
     recurse(0,n,a);
     return 0;
}
