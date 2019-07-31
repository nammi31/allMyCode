#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define sfs(x)      scanf("%s",x)
#define ingrid(r,c) (r>=0 && r<n && c>=0 && c<n)
#define pcase(x)    printf("Case %d:\n",x)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int n;
int main()
{
    int t,k=1;
    sf1(t);
    while(t--)
    {
        char s[11][11];
        sf1(n);
        FOR(i,n)  sfs(s[i]);
        FOR(i,n){
          FOR(j,n){
            if(s[i][j]=='.'){
               for(char ch='A'; ch<='Z'; ch++){
                  char taken=1;
                  if(ingrid(i-1,j) && s[i-1][j]==ch) taken=0;
                  if(ingrid(i,j+1) && s[i][j+1]==ch) taken=0;
                  if(ingrid(i+1,j) && s[i+1][j]==ch) taken=0;
                  if(ingrid(i,j-1) && s[i][j-1]==ch) taken=0;

                   if(taken) {  s[i][j]=ch; break;}
                }
             }
          }
        }
        pcase(k++);
        FOR(i,n) pfs(s[i]);
    }
    return 0;
}
