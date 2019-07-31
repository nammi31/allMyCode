#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pfs(x)      printf("%s\n",x)
using namespace std;
char days[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int main(){
    int t;
    sf1(t);
    while(t--){
        int d,m,y;
        sf3(d,m,y);
        int t[12] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
        y -= (m < 3);
        int index= (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
        pfs(days[index]);
    }
    return 0;
}
