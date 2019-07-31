#include<stdio.h>
#define CODE_IT(ch) ~ch
int main()
{
      int ch;
      ch=getchar();
      printf("%c is coded %c",ch,CODE_IT(ch));
      return 0;
}
