#include<iostream>
using namespace std;
int main()
{
    int a[10][10],i,j;
    for(i=0;i<10;i++){
        a[0][i]=1;
        a[i][0]=1;
    }
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
           a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    int n;
    while(cin>>n){

    }
    cout<<a[n-1][n-1];
    return 0;
}
