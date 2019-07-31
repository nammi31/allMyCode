#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    double r,pi,circle,squre,ans;
    int t,j=1;
    cin>>t;
    while(t--){
      cin>>r;
      pi = 2*acos(0.0);
      circle=pi*r*r;
      squre=4*r*r;
      ans=squre-circle;
      printf("Case %d: %.2lf\n",j++,ans);
    }

    return 0;
}
