#include<stdio.h>
int main()
{
    int i,j;
    char s[100],ans[48]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    gets(s);
    for(i=0; s[i] ;i++){
        if(s[i]==' ')
          printf(" ");
        for(j=0;j<48;j++){
            if(s[i]==ans[j])
                printf("%c",ans[j-1]);
            }
    }
    printf("\n");
    return 0;
}
