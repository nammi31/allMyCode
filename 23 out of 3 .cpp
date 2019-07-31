#include <stdio.h>

int num[6] ;
int flag;
int vis[6] ;
void dfs(int cur , int sum)
{

  int i;
  if(cur ==3)
  {
      if(sum==13)
       flag = 1 ;  return ;
  }
  else{
    for(i = 0 ; i < 3 ; i++){
       if(!vis[i]){
           vis[i] = 1 ;
            printf("%d visited\n",num[i]);
           printf("dfs + %d: %d\n",num[i],sum+num[i]);
           dfs(cur + 1 , sum + num[i]) ;
            printf("dfs * %d: %d\n",num[i],sum*num[i]);
           dfs(cur + 1 , sum * num[i] ) ;
                   printf("dfs - %d: %d\n",num[i],sum-num[i]);
           dfs(cur + 1 , sum - num[i] ) ;
           printf("%d not visited\n",num[i]);
           vis[i] = 0 ;
       }
    }
 }

}
int main()
{
    int a,b,c,d,e,i;
     while(scanf("%d%d%d",&a,&b,&c))
     {

         if(a==0 && b==0 && c==0 && d==0 && e==0)return 0;
         num[0]=a,num[1]=b,num[2]=c,num[3]=d,num[4]=e;

         flag = 0 ;
         for(i =0 ;i<3;i++ )
         {
             vis[i]=1;
             dfs(1,num[i]) ;
             vis[i]=0;
         }
         if(flag)
         printf("Possible\n");
         else  printf("Impossible\n");
    }

}
