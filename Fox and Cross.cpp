
 #include<bits/stdc++.h>
 #define   sf1(x)   scanf("%d",&x)
 #define   FOR(i,x) for(int i=0;i<x;i++)
 #define   pf   printf
 using namespace std;
 int main()
 {
     int n;
     char g[103][103];
     while(sf1(n)==1)
     {
         FOR(i,n){ FOR(j,n)  cin>>g[i][j];  }
         char out_cross=0;
         FOR(i,n)
             FOR(j,n){
                 if(g[i][j]=='#'){
                    if(g[i+1][j-1]=='#' && g[i+1][j]=='#' && g[i+1][j+1]=='#' && g[i+2][j]=='#'){
                        g[i][j]='.';g[i+1][j-1]='.'; g[i+1][j]='.'; g[i+1][j+1]='.'; g[i+2][j]='.';
                    }
                    else out_cross=1;
                 }
             }
             if(out_cross) pf("NO\n");
             else  pf("YES\n");
     }
     return 0;
 }

