#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int n,a[100005];
int up_binary(int x)
{
    int lw=0,hi=n,m;
    while(lw<hi){
        m=(lw+hi)/2;
        if(x<a[m]) hi=m;
       else lw=m+1;
    }
    return lw;
}
int low_binary(int x)
{
    int lw=0,hi=n,m;
    while(lw<hi){
        m=(hi+lw)/2;
       if(x<=a[m]) hi=m;
       else lw=m+1;
    }
    return lw;
}
int main()
{
    int d,x;
    sf1(n);
    FOR(i,n) sf1(a[i]);
    sort(a,a+n);
    sf1(d);
    FOR(i,d){
       sf1(x);
   //   int able=/*up_binary(x)*/ low_binary(x);
      int able= lower_bound(a,a+n,x)-a;
      cout<<"ans "; pf1(able);
    }
    return 0;
}
/*
5
3 10 8 6 11
4
1
10
3
11
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   while(getline(cin,s))
   {
       if(s=="#") break;
       if(next_permutation(s.begin(),s.end())) cout<<s<<endl;
       else puts("No Succesor");
   }
}*/
