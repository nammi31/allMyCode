
#include<stdio.h>
char case_convert(char ch1);
int main()
{
    char lower,upper;
    scanf("%c",&lower);
    upper=case_convert(lower);
    printf("equivalent uppercase:%c",upper);
    return 0;
}
char case_convert(char ch1)
{
    char ch2;
    ch2=(ch1>='a'&& ch1<='z')?(ch1+'A'-'a'):ch1;
    return (ch2);
}


