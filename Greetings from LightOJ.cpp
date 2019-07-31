#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pcase(x)    printf("Case %d: ",x)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int t,k=1;
    sf1(t);
    while(t--){
       int a,b;
       sf2(a,b);
       pcase(k++);
       pf1(a+b);
    }
    return 0;
}
