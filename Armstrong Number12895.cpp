 #include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,digit[10];
    cin>>t;
    while(t--){
        cin>>n;
        int x=n,i=0;
        while(n){
            digit[i]=n%10;
            n/=10;
            i++;
        }
        int sm=0,j;
        for(j=0;j<i;j++)
            sm+=pow(digit[j],i);

        if(sm==x) cout<<"Armstrong\n";
        else cout<<"Not Armstrong\n";
    }
    return 0;
}
