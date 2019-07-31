#include<bits/stdc++.h>
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)      printf("%.20lf\n",x)
using namespace std;
int main()
{
    int a,b,n,x,y,v;
    sf3(a,b,n);
    double mn=INT_MAX;
    while(n--){
        sf3(x,y,v);
        double time=(sqrt((x-a)*(x-a)+(y-b)*(y-b)))/v;
        if(time<mn) mn=time;
    }
    pf1(mn);
    return 0;
}
/*
0 0
2
2 0 1
0 2 2

1 3
3
3 3 2
-2 3 6
-2 7 10
*/
