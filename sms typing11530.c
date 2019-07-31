#include<stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    char s[105];
    getchar();
    for(j=1;j<=t;j++){
        gets(s);
        int press=0;
        for(i=0; s[i] ;i++){

                if(s[i]=='a' ||s[i]=='d' ||s[i]=='g' ||s[i]=='j' ||s[i]=='m' ||s[i]=='p' ||s[i]=='t' ||s[i]=='w' ||s[i]==' ' )
                press=press+1;

                if(s[i]=='b' ||s[i]=='e' ||s[i]=='h' ||s[i]=='k' ||s[i]=='n' ||s[i]=='q' ||s[i]=='u' ||s[i]=='x')
                press=press+2;

                if(s[i]=='c' ||s[i]=='f' ||s[i]=='i' ||s[i]=='l' ||s[i]=='o' ||s[i]=='r' ||s[i]=='v' ||s[i]=='y')
                    press=press+3;
                if(s[i]=='s'||s[i]=='z')
                    press=press+4;
        }
        printf("Case #%d: %d\n",j,press);
    }
    return 0;
}
