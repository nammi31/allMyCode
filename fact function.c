
#include<stdio.h>
int find_fact(int n);
int main()
{
      int num;
      scanf("%d",&num);
      printf("%d!=%d",num,find_fact(num));
      return 0;
}
int find_fact(int n)
{
      int i;
       if(n>1){
        return 1;
    else
    for(i=2;i<n;i++)
    return n*i;
}
