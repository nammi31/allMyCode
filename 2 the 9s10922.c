#include<stdio.h>
int add_digit(int n)
{
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main()
{
    char ns[1000];
    while(gets(ns)!=EOF){
        if(strcmp(ns,"0")==0) break;
        int i,sum=0;
        for(i=0; ns[i] ;i++)
           sum+=ns[i]-48;

        if(sum%9!=0)
           printf("%s is not a multiple of 9.\n",ns);
        else{
            int cnt=1;
            while(sum>9){
              sum=add_digit(sum);
              cnt++;
            }
           printf("%s is a multiple of 9 and has 9-degree %d.\n",ns,cnt);
        }
    }
   return 0;
}
