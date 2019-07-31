#include<bits/stdc++.h>
using namespace std;
//int a[20];
void revrse(int i,int n,int *a)
{
   if(i<n){
     revrse(i+1,n,a);
     cout<<a[i]<<" ";
   }
}
int main()
{
    int n,i,a[20];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    revrse(0,n,a);
    return 0;
}
