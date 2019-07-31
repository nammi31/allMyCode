#include<stdio.h>
int main()
{
    int t,m,n,sonars;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&n);
        sonars=(m/3)*(n/3);
        printf("%d\n",sonars);
    }
    return 0;
}
