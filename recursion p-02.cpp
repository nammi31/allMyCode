#include<bits/stdc++.h>
using namespace std;
void recurse(int i,int j,int *a)
{
  if(i<=j){
    printf("%d %d\n",a[i],a[j]);
    recurse(i+1,j-1,a);
  }
}
int main()
{
    int n,a[30];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
        recurse(0,n-1,a);
    return 0;
}
