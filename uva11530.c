 #include<stdio.h>
 #include<string.h>
int main()
{
    char a1[4]="abc", a2[4]="def",a3[4]="ghi",a4[4]="jkl",a5[4]="mno";
    char a6[5]="pqrs",a7[4]="tuv",a8[5]="wxyz",str[100];
    int i,j,len;
    printf("%s %s %s %s %s %s %s %s\n",a1,a2,a3,a4,a5,a6,a7,a8);
    gets(str);
    len= strlen(str);
    printf("length:%d\n",len);

    for(i=0;i<len;i++){
        for(j=0;j<=4;j++){
            if(str[i]==a1[j] )
                printf("number of type:%d\n",j+1);
        }
    }
        return 0;

}

