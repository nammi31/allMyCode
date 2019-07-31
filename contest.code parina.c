#include<stdio.h>
#include<string.h>
int main()
{
    char  s[100];
    while(gets(s)){
        int len=strlen(s),i;
        for( i=len-1; i>=0;i--){
            if(isalpha(s[i])){
                if(isvowel(s[i]) || s[i]=='Y'|| s[i]=='y')
                    printf("YES\n");
                else
                    printf("NO\n");
                break;
            }
        }
    }
    return 0;
}
