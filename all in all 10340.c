#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000000],s2[1000000];
    while(scanf("%s %s",s1,s2)!=EOF)
    {
        int j,i=0,len1=strlen(s1);
        for(j=0; s2[j] && i<len1 ;j++)
                if(s1[i]==s2[j])
                    i++;

        if(i==len1) printf("Yes\n");//all character of s1  +r matched.
        else  printf("No\n");
    }
    return 0;
}
