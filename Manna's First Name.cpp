/*#include<stdio.h>
#include<string.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(str)    scanf("%s",str)
#define pf          printf
char s1[8]="SUVOJIT";
int main()
{
    int t;
    sf1(t);
    while(t--)
    {
        char s[153];
        sfs(s);
        int ln=strlen(s);
        int suvojit=0; int suvo=0;
        for(int i=0,j=0; i<ln;i++){
            if(s[i]==s1[j])  j++;
            else{
                if(j==7){ suvojit++;i--; }
                else if(j==4){ suvo++; i--;}
                j=0;
            }
        }
        pf("SUVO = %d, SUVOJIT = %d\n",suvo,suvojit);

    }
    return 0;
}*/
#include<stdio.h>
#include<string.h>
#define sf1(x)      scanf("%d",&x)
#define sfs(str)    scanf("%s",str)
#define pf          printf
int main()
{
    int t;
    sf1(t);
    while(t--)
    {
        char s[153];
        sfs(s);
        int suvojit=0; int suvo=0;
        for(int i=0; s[i];i++){
            if(s[i]=='S'&&s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O'){
                if(s[i+4]=='J'&&s[i+5]=='I'&&s[i+6]=='T')
                    suvojit++;
                else suvo++;
            }
        }
        pf("SUVO = %d, SUVOJIT = %d\n",suvo,suvojit);
    }
    return 0;
}
