#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%s %s",x,y)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    char s1[103],s2[103];
    sf2(s1,s2);
    int ln1=strlen(s1),ln2=strlen(s2);
    char match=1;
    if(ln1!=ln2) match=0;
    else{
      for(int i=0; i<ln1; i++)
          if(s1[i]!=s2[ln1-i-1]) match=0;
    }
    pfs((match)?"YES":"NO");
    return 0;
}
