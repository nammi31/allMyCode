 #include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    long long int dec,j;
    int r,i,len;
    char s[35];
    while(scanf("%s",s)){
        if( (s[0]-48) <0)
            break;
        len=strlen(s);
        if(s[0]=='0' && s[1]=='x'){
            dec=0,j=1;
            for(i=len-1;i>=2;i--){
               if(isalpha(s[i]))
                   r=s[i]-55;
               else
                   r=s[i]-48;
               dec=dec+ r*j;
               j*= 16;
            }
            printf("%lld\n",dec);
        }
        else{
            dec=0,j=1;
            for(i=len-1;i>=0;i--){
                r=s[i]-48;
                dec=dec+ r*j;
                j*=10;
            }
            printf("0x%X\n",dec);
        }
    }
    return 0;
}
