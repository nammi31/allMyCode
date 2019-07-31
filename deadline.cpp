#include<bits/stdc++.h>
#define FOR(i,x)   for(int i=0; i<x; i++)
using namespace std;
struct work{
    int id;
    int eday;
    int val;
} d[105];
bool cmp(work a,work b)
{
    if(a.val==b.val) return  (a.eday<b.eday);
    return (a.val>b.val);
}
int main()
{
    int n;
    cin>>n;
    FOR(i,n){
      d[i].id=i+1;
      cin>>d[i].eday>>d[i].val;
    }
    sort(d,d+n,cmp);
    int k=1;
    for(int i=0; i<n;i++){
        if(k<=d[i].eday){
            k++;
           cout<<d[i].id<<endl;
        }
    }
    return 0;
}
/*
5
2 100
1 19
2 17
1 25
3 15

2 100
1 25
1 19
2 17
3 15
*/
