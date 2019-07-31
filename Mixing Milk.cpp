 /*ID: sustnam1
LANG: C++
TASK: milk
*/
 #include<bits/stdc++.h>
 #define sf2(x,y)    scanf("%d %d",&x,&y)
 #define pf1(x)      printf("%d\n",x)
 #define FOR(i,x)    for(int i=0;i<x;i++)
 using namespace std;
 int main()
 {
    // freopen("milk.in", "r", stdin);
    // freopen("milk.out", "w", stdout);
     int r,n,price,unit;
     sf2(r,n);
     pair<int,int>p[n];
     FOR(i,n){
         sf2(price,unit);
         p[i]=make_pair(price,unit);
     }
     sort(p,p+n);
     int cost=0;
     FOR(i,n){
         if(r==0) break;
         if(p[i].second<=r){
                r-=p[i].second;
                cost+=(p[i].second*p[i].first);
         }
         else{ cost+=(r*p[i].first); r=0;}
     }
     pf1(cost);
     return 0;
 }
 /*
 100 5
5 20
9 40
3 10
8 80
6 30
*/
