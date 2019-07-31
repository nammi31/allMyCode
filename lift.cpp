#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pcase(x)    printf("Case %d: ",x)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int a,b,k=1;
    int t;
    sf1(t);
    while(t--){
        sf2(a,b);
        int ans=a*4+19;
        if(a>=b)  ans+=(a-b)*4;
        else    ans+=(b-a)*4;
        pcase(k++);
        pf1(ans);
    }
    return 0;
}
