/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%lld",&x)
#define pf2(x,y)    printf("%lld:%lld\n",x,y)
#define FOR(i,x)    for(ll i=0;i<x;i++)
#define ll          long long
using namespace std;
int main()
{
    ll n,m,x;
    sf1(n);
    ll a=n*3,mn=INT_MAX;
    while(n--){
        sf1(x);
        if(x<mn) mn=x;
    }
    ll d=mn-1,b=0;
    sf1(m);
    while(m--){
        sf1(x);
        if(x>d) b+=3;
        else b+=2;
    }
    pf2(a,b);
    return 0;
}*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define ll long long
#define mx  200005
using namespace std;
int main()
{
    int a[mx],b[mx],n,m;
    sf1(n);
    FOR(i,n)  sf1(a[i]);
    sf1(m);
    FOR(i,m)  sf1(b[i]);
    sort(a,a+n); sort(b,b+m);
    int j=m-1;
    ll x=0,y=0,add1=(ll)n,add2=(ll)m;
    for(int i=n-1;i>=0;i--)
    {
        int d=a[i];
        while(j>=0 && b[j]>=d) j--,y++;
        x++;
        if(x-y>=add1-add2) add1=x,add2=y;
    }
    if(add1<add2) add1=add2=0;
    cout<<(ll)n*2+add1<<":"<<(ll)m*2+add2<<endl;
    return 0;
}
/*
3
1 3 5
3
2 4 6

3
1 2 3
2
5 6

5
3 8 9 10 11
5
4 5 6 7 16

5
6 7 8 9 10
5
1 6 8 11 13
*/
