#include<bits/stdc++.h>
using namespace std;
void recurse(int i,int n)
{
    if(i<n){
      if(i==0) printf("1");
      if(i>0) printf(" + x");
      if(i>1)  printf("^%d",i);
      recurse(i+1,n);
    }
}
int main()
{
    int n;
    cin>>n;
    recurse(0,n);
    return 0;
}
