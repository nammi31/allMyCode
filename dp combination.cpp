#include<bits/stdc++.h>
using namespace std;
int a[20][20]={0};
int C(int n,int r)
{
    if(n==r)  return 1;
    if(r==1) return n;
    if(a[n][r]) return a[n][r];
    else{
        a[n][r]=C(n-1,r)+C(n-1,r-1);
        return a[n][r];
    }
}
int main()
{
    int n,r;
    while(cin>>n>>r)
        printf("%d\n",C(n,r));
    return 0;
}
