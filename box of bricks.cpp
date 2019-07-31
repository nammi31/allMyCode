#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main(){
       int n,i,a[103],k=1;
       while(sf1(n)==1 && n){
        int sm=0,ans=0;
        FOR(i,n) { sf1(a[i]); sm+=a[i];}
        int avr=sm/n;
        FOR(i,n){
           if(a[i]>avr)
             ans+=(a[i]-avr);
        }
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",k++,ans);
    }
return 0;
}
