#include<bits/stdc++.h>
#define     sf2(x,y)   scanf("%d %d",&x,&y)
#define     pf1(x)     printf("%d\n",x)
using namespace std;
int main()
{
    int ex,nw;
    while(sf2(ex,nw)==2)
    {
        if(nw>2*ex)  { nw=2*ex;}      //2 5 process A(2,4)
        else if(ex> 2*nw){ ex=2*nw;}   //5 2 process B(4,2)
        pf1((ex+nw)/3);
    }
    return 0;
}
