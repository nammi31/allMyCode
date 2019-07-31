#include<stdio.h>
int main()
{
    char ins[100],str1[30]="p oiuytrelkjhgfdmnbvc|][';/.,",str2[30]="P OIUYTRELKJHGFDMNBVC|}{':?><";
    char ans[30]="i uytrewqjhgfdsabvcxz[polk,mn";
    int i,j;
    gets(ins);
        for(i=0;ins[i] ;i++){
            for(j=0;j<29;j++){
                if((str1[j]==ins[i])||(str2[j]==ins[i])){
                        printf("%c",ans[j]);
                }
            }
        }
       printf("\n");
    return 0;
}
