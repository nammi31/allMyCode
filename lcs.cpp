#include<bits/stdc++.h>
#define pfc(x)      printf("%c",x)
using namespace std;
string s1,s2;
int mat[10][10];
char direc[10][10];
void lcs_print(int a,int b)
{
    if(a==0 && b==0) return;
    else if(direc[a][b]=='d'){
      lcs_print(a-1,b-1);
      pfc(s1[a-1]);
    }
    else if(direc[a][b]=='L') lcs_print(a,b-1);
    else lcs_print(a-1,b);
}
int main()
{
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    for(int i=0; i<=n; i++) mat[0][i]=0;
    for(int j=0; j<=m; j++) mat[j][0]=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(s1[i-1]==s2[j-1]) {
                    mat[i][j]=mat[i-1][j-1]+1;
                    direc[i][j]='d';
            }
            else if(mat[i-1][j]>mat[i][j-1]){
                  mat[i][j]=mat[i-1][j];
                   direc[i][j]='u';
            }
            else{
                mat[i][j]=mat[i][j-1];
                 direc[i][j]='L';
            }
        }
    }
    lcs_print(n,m);
    return 0;
}
