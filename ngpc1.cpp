#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%s %s",x,y)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=x-1; i>=0;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int decimal(string s)
{
        int ln=s.size();
        int j=1,sm=0;
        FORr(i,ln){
            sm+=(s[i]-48)*j;
            j*=2;
        }
        return sm;
}

int main()
{
    string s1,s2;
    int t,k=1;
    sf1(t);
    while(t--){
        cin>>s1>>s2;
        int dec1=decimal(s1);
        int dec2=decimal(s2);
        pf2(dec1,dec2);
        pcase(k++);
        if(dec1>dec2) pf("A\n");
        else if(dec1<dec2) pf("B\n");
        else pf("Same\n");
    }
    return 0;
}
/*
2
10101
10100
10111
11011*/
