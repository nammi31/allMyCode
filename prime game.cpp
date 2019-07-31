#include<bits/stdc++.h>
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define mx 10000003
#define pcase(x)    printf("Case %d: ",x)
using namespace std;
int isprime[mx];
int main()
{
    int i,j;
    for(i=2;i<mx;i++)  isprime[i]=1;
    vector<int>p;
    int r=sqrt(mx);
    for(i=2;i<=r;i++){
        if(isprime[i]){
            for(j=2;i*j<mx;j++)
                isprime[i*j]=0;
        }
    }
    for(int i=2; i<mx; i++){
          if(isprime[i]) p.push_back(i);
    }
    int a,b,k=1;
    while(sf2(a,b)==2){
        if(a==0 && b==0) break;
        int sm=p[a-1]+p[b-1];
        pcase(k++);
        if(sm&1) printf("Odd.\n");
        else printf("Even.\n");
    }

    return 0;
}

