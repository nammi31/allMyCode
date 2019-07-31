#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[10000];
    while(gets(str)){
        int flag=1,i;  //no alphabet
        int word=0;
        for(i=0;str[i];i++){
            if(isalpha(str[i])&& flag==1){
                word++;
                flag=0;
            }
            else if(!isalpha(str[i]))
                flag=1;
        }
        printf("%d\n",word);
    }
    return 0;
}
