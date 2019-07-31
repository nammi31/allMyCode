#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main() {
    int t, i, j;
    sf1(t);
    while(t--) {
        int n, p, w, g, MW, ans = 0;
        int DP[31] = {};
        sf1(n);
        FOR(i,n) {
            sf2(p,w);
            for(j = 30; j >= w; j--){
                if(DP[j-w]+p>DP[j]){
                    DP[j] = DP[j-w]+p;
                }
            }
        }
        sf1(g);
        while(g--) {
                sf1(MW);
                pf1(DP[MW]);
           // ans += DP[MW];
        }
       // pf1(ans);
    }
    return 0;
}
