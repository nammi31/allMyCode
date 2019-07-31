  /* 5
    1 2 3 4 5
    5 4 3 2 1*/

#include<bits/stdc++.h>
#define   sf1(x)    scanf("%d",&x)
#define   pf        printf
#define   pf1(x)    printf("%d",x)
#define   pfn       printf("\n")
using namespace std;
int a[1003];
int main()
{

    int n;
    while(sf1(n)==1 && n)
    {
         while(sf1(a[0])==1 && a[0])
         {
             for(int i=1;i<n;i++) sf1(a[i]);
             int c=1,j=0;
             stack<int>st;
             while(c<=n)
             {
                 st.push(c);
                 while(st.size()!=0 && st.top()==a[j])
                 {
                     st.pop();
                     j++;
                 }
                 c++;
             }
             if(st.size()==0) pf("Yes\n");
             else             pf("No\n");
         }
         pfn;
    }
}
