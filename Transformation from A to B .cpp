/*
2 162
YES
5
2 4 8 81 162

4 42
NO

100 40021
YES
5
100 200 2001 4002 40021 */
#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1s(x)     printf("%d ",x)
#define pf1(x)      printf("%d\n",x)
#define pf2(x,y)    printf("%s\n%d\n",x,y)
#define FORr(i,x)   for(int i=x-1; i>=1;i--)
using namespace std;
int main()
{
    int a,b;
    while(sf2(a,b)==2){
        char possible=0;
        int store[10005],i=0;
        store[0]=b;
        while(b){
            if(b==a){
            possible=1; store[++i]=a;
            break;
            }
            if(b&1) {
                b--;
                if(b%10) break;
                 b/=10;
                 store[++i]=b;
            }
            else {
                b/=2;
                store[++i]=b;
            }
        }
        if(possible){
           pf2("YES",i);
           FORr(j,i) pf1s(store[j]);
           pf1(store[0]);
        }
        else puts("NO");
    }
    return 0;
}
