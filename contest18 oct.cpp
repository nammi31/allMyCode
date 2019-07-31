#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,p;
    while(cin>>n>>p){
       double k=pow(p,1.0/n);
       printf("%.0lf\n",k);
    }
    return 0;
}
