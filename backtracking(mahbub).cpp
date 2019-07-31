   ///combination
/*#include<bits/stdc++.h>
using namespace std;
int a[10],visited[10],store[10],n;
void backtrack(int cnt,int pos)
{
    if(cnt==3){
        for(int i=0;i<2;i++)  cout<<store[i]<<" ";
          cout<<store[2]<<endl;
          return;
        }
    for(int i=pos;i<n;i++){
            if(!visited[i]){
                visited[i]=1;
                store[cnt]=a[i];
                backtrack(cnt+1,i+1);
                visited[i]=0;
            }
        }
    return;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    backtrack(0,0);
    return 0;
}*/
 /// permutaion
/*#include<bits/stdc++.h>
using namespace std;
int n,a[15],store[7],visit[15];
void backtrack(int cnt)
{
    if(cnt==2){
       for(int i=0;i<1;i++) cout<<store[i]<<" ";
       cout<<store[1]<<endl;
       return;
    }
    for(int i=0;i<n;i++){
        if(!visit[i]){
            visit[i]=1;
            store[cnt]=a[i];
            backtrack(cnt+1);
            visit[i]=0;
        }
    }
    return;
}

int main()
{
   cin>>n;
   for(int  i=0;i<n;i++) cin>>a[i];
   backtrack(0);
   return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int n;
char a[15][15];
void printmatrix()
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%c ",a[i][j]);
        printf("\n");
    }
    printf("\n");
}
int embed(int row,int col)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]=='Q'){
                if(col==j || abs(row-i)==abs(col-j) )
                  return 0;
            }
    return 1;
}
void backtrack(int row)
{
    if(row<n){
     for(int j=0;j<n;j++)
        if(embed(row,j)){
           a[row][j]='Q';
           backtrack(row+1);
           a[row][j]='.';
        }
    }
    else printmatrix();
}
int main()
{
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            a[i][j]='.';
    }
    backtrack(0);
    return 0;
}
