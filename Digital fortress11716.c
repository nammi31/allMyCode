#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[10002];
    int t,root,len,a,i;
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(str);
        len=strlen(str);
        root=sqrt(len);
        if( root*root!=len )
            printf("INVALID\n");
        else{
            for(a=0;a<root;a++){
               for(i=a;i<=(len-root+a); i+=root)
                printf("%c",str[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
