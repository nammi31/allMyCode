#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    stack<int>st;
    int q,type,cost;
    sf1(q);
    while(q--)
    {

        sf1(type);
        if(type==1){
            if(st.size()==0) pf("No Food\n");
            else{ pf1(st.top()); st.pop(); }
        }
        else{ sf1(cost); st.push(cost); }
    }
    return 0;
}
