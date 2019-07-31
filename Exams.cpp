
#include<bits/stdc++.h>
#define    sf1(x)      scanf("%d",&x)
#define    sf2(x,y)    scanf("%d %d",&x,&y)
#define    pf1(x)      printf("%d\n",x)
using namespace std;
int main()
{
    pair<int,int>pr[5003];
    int n;
    sf1(n);
    for(int i=0;i<n;i++){
            sf2(pr[i].first , pr[i].second);
        }
    sort(pr,pr+n);
    int mn=pr[0].second;
    for(int i=1;i<n;i++){
        if(pr[i].second>=mn)    //non-decreasing order
             mn=pr[i].second;
        else mn=pr[i].first;
        }
    pf1(mn);
    return 0;
}
