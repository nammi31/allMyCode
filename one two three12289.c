#include<stdio.h>
#include<string.h>
int main()
{
    int t,len;
    char s[6];
    scanf("%d",&t);
    while(t--){
       scanf("%s",s);
       len=strlen(s);
       if(len==3){
           if( (s[0]=='o'&& s[1]=='n')||
              (s[0]=='o'&& s[2]=='e')||
              (s[1]=='n'&& s[2]=='e') )
              printf("1\n");
           else
              printf("2\n");
        }
       else
         printf("3\n");
    }

    return 0;
}
