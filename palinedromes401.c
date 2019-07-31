#include<stdio.h>
#include<string.h>
int main()
{
    int len,a,i,j;
    char str[25],cmp[21]="AEHIJLMOSTUVWXYZ12358",rev[21]="A3HILJMO2TUVWXY51SE28";
    while(scanf("%s",str)){
          int paline=0,mirror=0;
          len=strlen(str);
          a=len/2;
          for(i=0;i<a;i++){
            if(str[i]!=str[len-i-1])
                break;
          }
          if(i==a)
            paline=1;
          int flag=1;
          for(i=0;i<a;i++){
            for(j=0;j<21;j++){
                if(str[i]==cmp[j]){
                    if(str[len-i-1]!=rev[j])
                        flag=0;
                    break;
                }
            }
            if(!flag)
                break;
          }
          if(i==a)
            mirror=1;
          if(paline && mirror)
            printf("%s -- is a mirrored palindrome.\n\n",str);
          else  if(!paline && mirror)
            printf("%s -- is a mirrored string.\n\n",str);
          else  if(paline && !mirror)
            printf("%s -- is a regular palindrome.\n\n",str);
          else
            printf("%s -- is not a palindrome.\n\n",str);
    }
    return 0;
}
