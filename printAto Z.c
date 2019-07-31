#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=3;i++){  // 3 times
        for(j=0;j<=25;j++){   //  A to Z
            for(k=1;k<=2;k++){ //  AA BB
                printf("%c\t",'A'+j);
            }
        }
        printf("\n");
    }
    return 0;
}
