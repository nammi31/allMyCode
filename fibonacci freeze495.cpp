#include<bits/stdc++.h>
using namespace std;
int f[5001][1050];
int main()
{
    f[0][0]=0;
    f[1][0]=1;
    f[2][0]=1;
    //printf("%d %d %d\n", f[0][0], f[1][0], f[2][0]);
    for(int i=3;i<10;i++){
        for(int j=0;j<10;j++){
            f[i][j]+=f[i-2][j]+f[i-1][j];
            printf("f[%d][%d] = %d\n",i,j,f[i][j]);
            if(f[i][j]>=10){
                f[i][j+1]+=f[i][j]/10;
                f[i][j]%=10;
            }
        }
    }
    int i,n;
    while(cin>>n){
       int k=1049;
       while(f[n][k]==0) k--;
       printf("The Fibonacci number for %d is ",n);
       for(i=k; i>=0;i--)  printf("f[%d][%d]= %d\n",n,i,f[n][i]);
      // printf("%d",f[n][i]);
       cout<<endl;
    }
    return 0;
}

