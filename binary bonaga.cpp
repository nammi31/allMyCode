#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    string s1,s2;
    int t,k=1;
    sf1(t);
    while(t--){
        cin>>s1>>s2;
        pcase(k++);
        int ln1=s1.length();
        int ln2=s2.length();
        if(s1[0]=='0'){
            int i=0;
            while(s1[i]=='0') { i++; ln1--;}
        }
        if(s2[0]=='0'){
            int i=0;
            while(s2[i]=='0') { i++; ln2--;}
        }
        if(ln1==0 && ln2==0) { pf("Same\n"); continue; }
        if(ln1>ln2) pf("A\n");
        else if(ln1<ln2) pf("B\n");
        else {
            char same=1;
            for(int i=0; s1[i]; i++){
               if((s1[i]-48)>(s2[i]-48 )){  pf("A\n");same=0; break;}
               else if((s1[i]-48)<(s2[i]-48 )) { pf("B\n"); same=0; break;}
           }
           if(same) pf("Same\n");
        }
    }
    return 0;
}
