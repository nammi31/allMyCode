//motamoti.....apu ami uva-369 problem submit korci r wrong khaici
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long comb(int a,int b)
{
    if(b==0) return 1;
    else return comb(a-1,b-1)*a/b;

}
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
            return 0;
        else
         printf("%d things taken %d at a time is %lld exactly\n",a,b,comb(a,min(b,a-b)));
    }
    return 0;
}
