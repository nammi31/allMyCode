
#include<stdio.h>
int main()
{
    char ch;
    ch=getchar();
    ch=tolower(ch);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
        printf("vowel");
    }
    else{
        printf("consonent");
    }

    return 0;
}
