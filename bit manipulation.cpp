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
    /*string s;  //binary  1110
    cin>>s;
    int j=1,sm=0;
    for(int i=s.size()-1; i>=0; i--){
        sm+=(s[i]-48)*j;
        j*=2;
    }
    pf1(sm);*/
    int x=193;          /// 1100 0001
    //int y = x ^ 0xf0;   /// 0xf0  1111 0000
    int y= ~x ;
    cout<<y<<endl;
    return 0;
}
