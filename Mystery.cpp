#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    int t,n;
    sf1(t);
    while(t--){
        sf1(n);
        int c=0;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                if(i*i==n) c++;
                else c+=2;
            }
        }
        pf1(c);
    }
    return 0;
}
