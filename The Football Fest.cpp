#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define sfc(x)      scanf("%c",&x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
using namespace std;
int main()
{
    int t,n,now;
    sf1(t);
    while(t--)
    {
        stack<int>st;
        sf2(n,now);
        st.push(now);
        char ch;
        while(n--){
            sfc(ch);
            if(ch=='P'){ sf1(now);  st.push(now);}
            else{
                int a=st.top();
                  st.pop();
                int b=st.top();
                  st.pop();
                st.push(a);
                 st.push(b);
            }
        }
        pf("Player %d\n",st.top());
    }
    return 0;
}
